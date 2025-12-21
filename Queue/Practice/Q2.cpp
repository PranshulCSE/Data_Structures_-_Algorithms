// Implementation of a Queue using Classes in C++

#include<iostream>
using namespace std;
#define Size 10
class Queue {
private:
    int queue[Size];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value) {
        if (rear == Size - 1) {
            cout << "Queue is Full" << endl;
            return;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            queue[rear] = value;
        }
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Dequeued Element is: " << queue[front] << endl;
        front++;
    }
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue Elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
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