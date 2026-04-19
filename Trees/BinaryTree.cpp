// Program how to create a Binary tree using recursive function call
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node * tree(int x){
    if(x==-1)
    return NULL;
    Node *temp=new Node(x);
    int left,right;
    cout << "Enter Left child\n";
    cin >> left;
    temp->left=tree(left);
    cout<<"Enter Right child\n";
    cin >> right;
    temp->right=tree(right);
    return temp;
}
int main()
{
    Node *root=tree(1);
    return 0;
}