// Stack Implementation using Linked List in C++
#include <iostream>
using namespace std;    
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class Stack {
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push (int x){
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }
    void pop(){
         if (top==nullptr)
         {
            cout << "\n Stack Underflow\n";
            return;
         }
         Node* temp = top;
            cout << "\n Popped Element is: " << temp->data << endl;
            top = top->next;
            delete temp;
    }
    void peek(){
        if (top == nullptr)
        {
            cout << "\n Stack Underflow\n";
            return;
        }
        else
            cout << "\n Peeked Element is: " << top->data << endl;
    }
    void display(){
        if (top == nullptr)
        {
            cout << "\n Stack is Empty\n";
            return;
        }
        else
        {
            cout << "\n Stack Elements are: ";
            Node* current = top;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();  
    return 0;
}