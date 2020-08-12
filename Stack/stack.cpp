//STACK using Array

// #include <iostream>
// using namespace std;

// class Stack
// {
//     int top;

// public:
//     int myStack[10];
//     Stack()
//     {
//         top = -1;
//     }
//     bool push(int x);
//     int pop();
//     bool isEmpty();
// };
// // Adding item
// bool Stack ::push(int x)
// {
//     if (top >= 10)
//     {
//         cout << "stack Overflowed" << endl;
//         return false;
//     }
//     else
//     {
//         myStack[++top] = x;
//         cout << x << endl;
//         return true;
//     }
// }

// // Removing item

// int Stack ::pop()
// {
//     if (top < 0)
//     {
//         cout << "Stack underflow" << endl;
//         return 0;
//     }
//     else
//     {
//         int x = myStack[top--];
//         return x;
//     }
// }

// // check for empty

// bool Stack ::isEmpty()
// {
//     return (top < 0);
// }

// int main()
// {
//     Stack stack;
//     cout << "This is pushed item:" << endl;
//     stack.push(1);
//     stack.push(2);
//     stack.push(3);
//     stack.push(4);
//     cout << "Popping out: " << endl;
//     while (!stack.isEmpty())
//     {
//         cout << stack.pop() << endl;
//     }
//     return 0;
// }

//STACK using Linked List

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
    // Adding elements

    void push(int new_data)
    {
        Node *new_node = new Node;
        new_node->data = new_data;
        new_node->next = head;

        if (head == NULL)
        {
            head = new_node;
        }
        head = new_node;
    }
    // Deleting elements

    void del()
    {
        Node *temp = head;
        head = temp->next;
        free(temp);
    }

    // Displaying elements
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
    LinkedList node1;

    node1.push(1);
    node1.push(2);
    node1.push(3);
    node1.push(4);
    // cout << "Before Delete: " << endl;
    // node1.display();
    node1.del();
    cout << "After Delete: " << endl;
    node1.display();

    return 0;
}