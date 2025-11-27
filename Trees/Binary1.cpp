#include <iostream>
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
int main()
{
// Just Creating a Simple Binary Tree..
    //       11
    //      /  \
            //     25   36
    //    / \   /
    //   63 88  99
    Node *root = new Node(11);
    root->left = new Node(25);
    root->right = new Node(36);
    root->left->left = new Node(63);
    root->left->right = new Node(88);
    root->right->left = new Node(99);
}