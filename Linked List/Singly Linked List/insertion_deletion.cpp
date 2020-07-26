// insertion  front,end,middle
//deletion any node;

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class LinkedList
{
    node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *temp = new node;
        temp->data = n;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    node *gethead()
    {
        return head;
    }

    static void display(node *x)
    {
        cout << x->data << endl;
        display(x->next);
    }

    void front(int n)
    {
        node *frnt = new node;
        frnt->data = n;
        frnt->next = head;
        head = frnt;
    }
    void random(node *temp, int n)
    {
        node *a = new node;
        a->data = n;
        a->next = temp->next;
        temp->next = a;
    }

    static void del(node *before_del)
    {
        node *temp;
        temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    }
};

int main()
{
    LinkedList a;
    a.add_node(1);
    a.add_node(2);
    //a.add_node(10);
    // a.front(10);
    a.random(a.gethead(), 10);
    // LinkedList::display(a.gethead());
    a.del(a.gethead()->next);
    LinkedList::display(a.gethead());
}
