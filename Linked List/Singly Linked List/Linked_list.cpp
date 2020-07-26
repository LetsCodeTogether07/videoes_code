//Linked List

//  special type of array where there is dynamism i.e can add member at any position can link many list together.

// A linked list is made up of many nodes connected with each other.
// each node has mainy two parts of which one hold the data nd the other is used to cnnect other node.

// We can achieve this using structure which is same as class only the difference in access specification.

//part1 => adding data and displaying
#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};

// class node
// {
//     int data;
//     node *next;

// public:
//     friend class LinkedList;
// };

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
    void display()
    {
        node *x;
        x = head; //in linked list if we have access to the head we can have access to all the members
        while (x != NULL)
        {
            cout << x->data << endl;
            x = x->next;
        }
    }

    node *gethead()
    {
        return head;
    }

    static void concatenate(node *x, node *y)
    {
        if (x != NULL && y != NULL)
        {
            if (x->next == NULL)
                x->next = y;
            else
                concatenate(x->next, y);
        }
    }
    static void display(node *x)
    {
        cout << x->data << endl;
        display(x->next);
    }
};

int main()
{
    LinkedList a;
    a.add_node(1);
    a.add_node(2);
    LinkedList b; //a + b
    b.add_node(3);
    b.add_node(4);
    LinkedList ::concatenate(a.gethead(), b.gethead());
    LinkedList ::display(a.gethead());
}