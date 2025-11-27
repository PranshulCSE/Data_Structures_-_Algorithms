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
void printleft(Node *n) //To Access Left Elements of the Tree
{
    while (n != NULL)
    {
        cout << n->data << "  ";
        n = n->left;
    }
    cout << endl;
}
void printright(Node *n) // To Access Right Elements of the Tree
  {
        while (n != NULL)
        {
            cout << n->data << "  ";
            n = n->right;
        }
        cout << endl;
    }
    int main()
    {

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
        cout<<"Left Elements of the tree are: ";
        printleft(root);
        cout << "Right Elements of the tree are: ";
        printright(root);
    }