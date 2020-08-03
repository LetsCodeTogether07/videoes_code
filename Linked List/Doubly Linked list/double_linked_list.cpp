
#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
};

// insertion(front)
void add_node(Node **node_ref, int n)
{

  Node *new_node = new Node();

  new_node->data = n;

  new_node->prev = NULL;
  new_node->next = (*node_ref);

  if ((*node_ref) != NULL)
  {
    (*node_ref)->prev = new_node;
  }

  (*node_ref) = new_node;
}

// insertion(end)
void end(Node **ref_node, int n)
{
  Node *new_node = new Node();
  Node *last = (*ref_node);

  new_node->data = n;
  new_node->next = NULL;

  if ((*ref_node) == NULL)
  {
    new_node->prev = NULL;
    (*ref_node) = new_node;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = new_node;
  new_node->prev = last;
}

//insertion(any pos)

void after(Node *ref_node, int n)
{
  if (ref_node == NULL)
  {
    return;
  }

  Node *new_node = new Node();

  new_node->data = n;

  // 1   <->  2
  //  1     <-> x <->     2

  new_node->next = ref_node->next;
  ref_node->next = new_node;
  new_node->prev = ref_node;

  if (new_node->next != NULL)
    new_node->next->prev = new_node;
}

//deleting

void deleting(Node **ref_node, Node *del)
{
  if (*ref_node == NULL || del == NULL)
    return;

  if (*ref_node == del)
    *ref_node = del->next;

  if (del->next != NULL)
    del->next->prev = del->prev;

  if (del->prev != NULL)
    del->prev->next = del->next;

  free(del);
  return;
}
//display
void display(Node *node)
{
  Node *temp;

  while (node != NULL)
  {
    cout << node->data << endl;
    temp = node;
    node = node->next;
  }

  cout << "\n";

  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->prev;
  }
}

int main()
{
  Node *head = NULL;
  add_node(&head, 1);
  // add_node(&head, 2);
  // add_node(&head, 3);
  // add_node(&head, 4);
  // add_node(&head, 5);
  end(&head, 1);
  end(&head, 2);
  end(&head, 3);
  end(&head, 4);
  end(&head, 5);
  after(head->next, 100);
  

  display(head);
}
