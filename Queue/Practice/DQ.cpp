#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DeQueue
{
private:
    Node *front;
    Node *rear;

public:
    DeQueue() : front(nullptr), rear(nullptr) {}

    // Insert at front
    void insertFront(int val)
    {
        Node *newNode = new Node(val);
        if (front == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        cout << "Inserted " << val << " at front\n";
    }

    // Insert at rear
    void insertRear(int val)
    {
        Node *newNode = new Node(val);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        cout << "Inserted " << val << " at rear\n";
    }

    // Delete from front
    void deleteFront()
    {
        if (front == nullptr)
        {
            cout << "DeQueue is empty\n";
            return;
        }
        cout << "Deleted " << front->data << " from front\n";
        if (front == rear)
        {
            delete front;
            front = rear = nullptr;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            front->prev = nullptr;
            delete temp;
        }
    }

    // Delete from rear
    void deleteRear()
    {
        if (rear == nullptr)
        {
            cout << "DeQueue is empty\n";
            return;
        }
        cout << "Deleted " << rear->data << " from rear\n";
        if (front == rear)
        {
            delete rear;
            front = rear = nullptr;
        }
        else
        {
            Node *temp = rear;
            rear = rear->prev;
            rear->next = nullptr;
            delete temp;
        }
    }

    // Display queue
    void display()
    {
        if (front == nullptr)
        {
            cout << "DeQueue is empty\n";
            return;
        }
        cout << "DeQueue: ";
        Node *temp = front;
        while (temp)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Check if empty
    bool isEmpty()
    {
        return front == nullptr;
    }

    // Get front element
    int getFront()
    {
        return front ? front->data : -1;
    }

    // Get rear element
    int getRear()
    {
        return rear ? rear->data : -1;
    }
};

int main()
{
    DeQueue dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);
    dq.display();

    dq.deleteFront();
    dq.display();

    dq.deleteRear();
    dq.display();

    cout << "Front: " << dq.getFront() << ", Rear: " << dq.getRear() << "\n";

    return 0;
}