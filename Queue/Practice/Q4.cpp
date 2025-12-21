// Implementation of Queue using Linked List in C++
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Queue
{
private:
    Node *front;
    Node *rear;
public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (rear == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        Node *temp = front;
        cout << "Dequeued Element is: " << front->data << endl;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue Elements are: ";
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        delete temp;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(40);
    q.display();
    return 0;
}