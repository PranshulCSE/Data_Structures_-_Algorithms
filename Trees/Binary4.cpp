// Preorder Traversal of Binary Tree
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
void Preorder(Node *root) // For Preorder Traversal of the Tree
{
    if (root == NULL)
        return;
           // Traversing left Subtree
    cout << root->data << "\t"; // Printing the data
    Preorder(root->left);
    Preorder(root->right);       // Traversing Right Subtree
}

int main()
{
    Node *root = new Node(11);
    root->left = new Node(25);
    root->right = new Node(36);
    root->left->left = new Node(63);
    root->left->left->left = new Node(22);
    root->left->left->right = new Node(32);
    root->right->left->left = new Node(79);
    root->right->left->right = new Node(29);
    root->left->right = new Node(88);
    root->right->left = new Node(99);
    cout << "Preorder Traversal of the Tree is:\t ";
    Preorder(root);
}