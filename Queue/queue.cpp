// QUEUE using Array

#include <iostream>
using namespace std;

class Queue
{
    int myQueue[5], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == 5)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        return false;
    }

    void enQueue(int value)
    {
        if (isFull())
            cout << "Queue is full" << endl;
        else
        {
            if (front = -1)
                front = 0;
            rear++;
            myQueue[rear] = value;
            //cout << value << endl;
        }
    }

    int deQueue()
    {
        int value;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        // cout << "Deleted => " << value << "From Queue";
        return (value);
    }

    void displayQueue()
    {
        int i;
        if (isEmpty())
            cout << "Queue is Empty" << endl;
        else
        {
            cout << "Front: " << front << endl;
            cout << "Rear: " << rear << endl;
            cout << "Queue elements: " << endl;
            for (i = front; i <= rear; i++)
            {
                cout << myQueue[i] << endl;
            }
        }
    }
};

int main()
{
    Queue q1;
    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    //q1.displayQueue();
    q1.deQueue();
    q1.deQueue();
    q1.deQueue();
    q1.displayQueue();
    
    return 0;
}
