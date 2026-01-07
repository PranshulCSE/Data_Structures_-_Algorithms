// Level order traversal of a binary tree using C++
#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void LevelOrder(Node *root) { // For Level Order Traversal of the Tree
    if (root == NULL)
        return;
    queue<Node *> q;          // Creating a queue to hold nodes
    q.push(root);             // Pushing the root node into the queue
    while (!q.empty()) {      // While there are nodes in the queue
        Node *current = q.front(); // Get the front node
        q.pop();              // Remove the front node from the queue
        cout << current->data << "\t"; // Print the data of the current node
        if (current->left != NULL) // If left child exists, push it into the queue
            q.push(current->left);
        if (current->right != NULL) // If right child exists, push it into the queue
            q.push(current->right);
    }
}
int main() {
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
    cout << "Level Order Traversal of the Tree is:\t ";
    LevelOrder(root);
}