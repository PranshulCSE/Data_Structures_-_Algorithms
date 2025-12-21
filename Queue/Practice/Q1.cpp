// Implementation of a Queue using Arrays in C++
#include<iostream>
using namespace std;
#define Size 10 
int queue[Size];
int front = -1;
int rear = -1;
void enqueue(int value){
    if(rear == Size -1 ){
        cout<<"Queue is Full"<<endl;
        return;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
    }  
}
void dequeue(){
    if(front == -1|| front>rear){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<"Dequeud Element is: "<<queue[front]<<endl;
    front++;
}
void display(){
    if (front == -1 || front > rear)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Queue Elements are: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout<<endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    display();
    return 0;
}