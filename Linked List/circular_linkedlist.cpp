//      Circular Linked List

#include <iostream>

using namespace std;
class Node
{
    int data;
    Node *next;
    friend class LinkedList;
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Adding  Node (adding in front)

    void add_node(int new_data)
    {
        Node *new_node = new Node;
        Node *temp = head;
        new_node->data = new_data;
        new_node->next = head;

        if (head != NULL)
        {
            while (temp->next != head)
                temp = temp->next;
            temp->next = new_node;
        }

        else
            new_node->next = new_node;

        head = new_node;
    }

    // Displaying List

    void display()
    {
        while (head != NULL)
        {
            cout << head->data << endl;
            head = head->next;
        }
    }
};

int main()
{
    LinkedList Node1;
    Node1.add_node(1);
    Node1.add_node(2);
    Node1.add_node(3);
    Node1.add_node(4);

    Node1.display();

    return 0;
}
