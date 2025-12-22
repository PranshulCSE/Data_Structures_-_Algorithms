// Implementation of a simple singly linked list in C++
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class SinglyLinkedList
{

private:
    Node *head;

public:
    SinglyLinkedList()
    {
        head = NULL;
    }
    void insertAtEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void deleteFromBeginning()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        cout << "Deleted: " << temp->data << endl;
        delete temp;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    SinglyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    list.deleteFromBeginning();
    list.display();
    return 0;
}