// Implementation of a circular Queue using Arrays in C++
#include <iostream>
using namespace std;
#define Size 10
int queue[Size];
int front = -1;
int rear = -1;
void enqueue(int value)
{
    if ((rear + 1) % Size == front)
    {
        cout << "Queue is Full" << endl;
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % Size;
        queue[rear] = value;
    }
}
void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    else
    {
        cout << "Dequeued: " << queue[front] << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % Size;
        }
    }
}
void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true)
    {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % Size;
    }
    cout << endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    display();
    return 0;
}