// Implementation of Circular Queue using Linked List in C++
#include <iostream>
using namespace std;    
struct Node
{
    int data;
    Node *next;
};
class CircularQueue
{
private:
    Node *front;
    Node *rear;
public:
    CircularQueue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            rear->next = front;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        if (front == rear)
        {
            cout << "Dequeued: " << front->data << endl;
            delete front;
            front = NULL;
            rear = NULL;
        }
        else
        {
            Node *temp = front;
            cout << "Dequeued: " << front->data << endl;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        Node *temp = front;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }
};
int main()
{
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display();
    cq.dequeue();
    cq.display();
    cq.enqueue(40);
    cq.display();
    return 0;
}