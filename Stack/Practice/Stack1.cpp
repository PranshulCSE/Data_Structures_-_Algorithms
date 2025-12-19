// Stack Implementation using Array in C++
#include <iostream>
using namespace std;
#define Size 10
int stack[Size];
int top = -1;
void push(int x){
   if(top==Size-1){
    cout<<"\n Stack Overflow\n";
    return;
   }
   else
    stack[++top]=x;
}
void pop(){
    if(top==-1)
    {
        cout<<"\n Stack Underflow\n";
        return;
    }
        else
        cout<<"\n Popped Element is: "<<stack[top--]<<endl;    
}
void peek(){
    if (top == -1)
    {
        cout << "\n Stack Underflow\n";
        return;
    }
    else
        cout << "\n Peeked Element is: " << stack[top] << endl;
}
void display(){
    if(top==-1)
    {
        cout<<"\n Stack is Empty\n";
        return;
    }
    else
    {
        cout<<"\n Stack Elements are: ";
        for(int i=top;i>=0;i--)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();  
    return 0;
}