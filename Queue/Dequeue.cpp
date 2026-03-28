#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;
    Node *prev;

    Node(T value) : data(value), next(nullptr), prev(nullptr) {}
};

template <typename T>
class Deque
{
private:
    Node<T> *front;
    Node<T> *back;
    int size;

public:
    Deque() : front(nullptr), back(nullptr), size(0) {}

    ~Deque()
    {
        while (!isEmpty())
        {
            popFront();
        }
    }

    void pushFront(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (isEmpty())
        {
            front = back = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        size++;
    }

    void pushBack(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (isEmpty())
        {
            front = back = newNode;
        }
        else
        {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
        size++;
    }

    T popFront()
    {
        if (isEmpty())
        {
            throw runtime_error("Deque is empty!");
        }
        T value = front->data;
        Node<T> *temp = front;
        if (front == back)
        {
            front = back = nullptr;
        }
        else
        {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
        size--;
        return value;
    }

    T popBack()
    {
        if (isEmpty())
        {
            throw runtime_error("Deque is empty!");
        }
        T value = back->data;
        Node<T> *temp = back;
        if (front == back)
        {
            front = back = nullptr;
        }
        else
        {
            back = back->prev;
            back->next = nullptr;
        }
        delete temp;
        size--;
        return value;
    }

    T getFront()
    {
        if (isEmpty())
        {
            throw runtime_error("Deque is empty!");
        }
        return front->data;
    }

    T getBack()
    {
        if (isEmpty())
        {
            throw runtime_error("Deque is empty!");
        }
        return back->data;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return false; // Doubly linked list is never full
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Deque<int> dq;

    dq.pushFront(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushBack(30);

    cout << "Front: " << dq.getFront() << endl;
    cout << "Back: " << dq.getBack() << endl;
    cout << "Size: " << dq.getSize() << endl;

    cout << "Pop Front: " << dq.popFront() << endl;
    cout << "Pop Back: " << dq.popBack() << endl;

    cout << "Is Empty: " << (dq.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full: " << (dq.isFull() ? "Yes" : "No") << endl;

    return 0;
}