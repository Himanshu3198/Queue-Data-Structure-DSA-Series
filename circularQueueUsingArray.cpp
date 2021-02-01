// implementation of  circular queue using array
// Time Complexity: Time complexity of enQueue(), deQueue() operation is O(1) as there is no loop in any of the operation.
#include <iostream>
#define size 5
using namespace std;

int queue[size];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if (front == 0 && rear == size - 1 || (front == rear + 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int data)
{

    if ((rear + 1) % size == front)
    {
        cout << "queue is full\n";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % size;
        queue[rear] = data;

        cout << "Inserted element is " << data << "\n";
    }
}

void dequeue()
{

    if (isEmpty())
    {
        cout << "queue is full\n";
    }

    else
    {
        int element = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        cout << element << " is deleted from queue\n";
    }
}

void Front()
{
    if (isEmpty())
    {
        cout << "queue is empty\n";
    }

    else
    {
        cout << "element at front is " << queue[front] << "\n";
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "queue is empty\n";
    }
    else
    {

        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << queue[i] << " ";
        }
        else
        {

            for (int i = front; i < size; i++)
                cout << queue[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << queue[i] << " ";
        }

        cout << "\n";
    }
}

    int main()
    {

        enqueue(5);
        enqueue(10);
        enqueue(15);
        enqueue(20);
        enqueue(25);
        // enqueue(30);
        dequeue();
        // display();
          enqueue(30);
           enqueue(90);
        display();
    }

 
