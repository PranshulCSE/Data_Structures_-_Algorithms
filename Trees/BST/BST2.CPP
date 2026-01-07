// Understanding Basic Operations in a Binary Search Tree (BST)
#include <iostream>
using namespace std;
// Definition of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// Function to insert a new value into the BST
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}
// Function to search for a value in the BST
bool search(Node* root, int val) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == val) {
        return true;
    }
    if (val < root->data) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}
// Inorder traversal of the BST (Left, Root, Right)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main() {
    Node* root = nullptr;
    // Inserting values into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    // Printing the inorder traversal of the BST
    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;
    // Searching for values in the BST
    int searchValues[] = {40, 90};
    for (int val : searchValues) {
        if (search(root, val)) {
            cout << val << " found in the BST." << endl;
        } else {
            cout << val << " not found in the BST." << endl;
        }
    }
    return 0;
}
