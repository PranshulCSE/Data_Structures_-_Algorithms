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