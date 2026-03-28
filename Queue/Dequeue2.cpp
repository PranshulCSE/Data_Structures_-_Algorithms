#include <iostream>
using namespace std;

class Dequeue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Dequeue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    void pushBack(int value)
    {
        if (isFull())
        {
            cout << "Dequeue is full!\n";
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        cout << "Pushed " << value << " at back\n";
    }

    void pushFront(int value)
    {
        if (isFull())
        {
            cout << "Dequeue is full!\n";
            return;
        }
        if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = value;
        size++;
        cout << "Pushed " << value << " at front\n";
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Dequeue is empty!\n";
            return -1;
        }
        return arr[front];
    }

    int getBack()
    {
        if (isEmpty())
        {
            cout << "Dequeue is empty!\n";
            return -1;
        }
        return arr[rear];
    }

    void popFront()
    {
        if (isEmpty())
        {
            cout << "Dequeue is empty!\n";
            return;
        }
        cout << "Popped " << arr[front] << " from front\n";
        front = (front + 1) % capacity;
        size--;
        if (isEmpty())
        {
            front = -1;
            rear = -1;
        }
    }

    void popBack()
    {
        if (isEmpty())
        {
            cout << "Dequeue is empty!\n";
            return;
        }
        cout << "Popped " << arr[rear] << " from back\n";
        rear = (rear - 1 + capacity) % capacity;
        size--;
        if (isEmpty())
        {
            front = -1;
            rear = -1;
        }
    }

    ~Dequeue()
    {
        delete[] arr;
    }
};

int main()
{
    Dequeue dq(5);

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushBack(30);

    cout << "Front: " << dq.getFront() << "\n";
    cout << "Back: " << dq.getBack() << "\n";

    dq.popFront();
    dq.popBack();

    cout << "Is Empty: " << dq.isEmpty() << "\n";

    return 0;
}