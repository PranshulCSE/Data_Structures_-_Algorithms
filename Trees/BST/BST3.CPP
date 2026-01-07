// BST Based Deletion Operation in C++
#include <iostream>
using namespace std;
// Definition of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};// Function to insert a new value into the BST    
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
// Function to find the minimum value node in the BST
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}   
// Function to delete a value from the BST
Node* deleteNode(Node* root, int val) {
    if (root == nullptr) {
        return root;
    }
    if (val < root->data) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->data) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);
        root->data = temp->data; // Copy the inorder successor's content to this node
        root->right = deleteNode(root->right, temp->data); // Delete the inorder successor
    }
    return root;
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
    // Deleting a value from the BST
    cout << "Deleting 20 from the BST." << endl;
    root = deleteNode(root, 20);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
    cout << "Deleting 30 from the BST." << endl;
    root = deleteNode(root, 30);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
    cout << "Deleting 50 from the BST." << endl;
    root = deleteNode(root, 50);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
    return 0;
}