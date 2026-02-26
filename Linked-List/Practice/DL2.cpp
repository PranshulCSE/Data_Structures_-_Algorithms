#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList()
    {
        head = tail = NULL;
    }

    // Insert at Front
    void insertFront(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at Back
    void insertBack(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    // Insert at Specific Position (1-based index)
    void insertAtPosition(int val, int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid Position\n";
            return;
        }

        if (pos == 1)
        {
            insertFront(val);
            return;
        }

        Node* curr = head;
        int count = 1;

        while (count < pos - 1 && curr != NULL)
        {
            curr = curr->next;
            count++;
        }

        if (curr == NULL)
        {
            cout << "Position Out of Range\n";
            return;
        }

        Node* newNode = new Node(val);

        if (curr == tail)
        {
            insertBack(val);
        }
        else
        {
            newNode->next = curr->next;
            newNode->prev = curr;
            curr->next->prev = newNode;
            curr->next = newNode;
        }
    }

    // Delete Head
    void deleteFront()
    {
        if (head == NULL)
            return;

        Node* temp = head;

        if (head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    // Delete Tail
    void deleteBack()
    {
        if (tail == NULL)
            return;

        Node* temp = tail;

        if (head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }

    // Delete at Specific Position (1-based index)
    void deleteAtPosition(int pos)
    {
        if (pos <= 0 || head == NULL)
            return;

        if (pos == 1)
        {
            deleteFront();
            return;
        }

        Node* curr = head;
        int count = 1;

        while (count < pos && curr != NULL)
        {
            curr = curr->next;
            count++;
        }

        if (curr == NULL)
        {
            cout << "Position Out of Range\n";
            return;
        }

        if (curr == tail)
        {
            deleteBack();
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }

    // Display List
    void display()
    {
        Node* temp = head;
        cout << "Doubly Linked List: ";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList list;

    list.insertFront(10);
    list.insertBack(20);
    list.insertBack(30);
    list.insertAtPosition(15, 2);

    list.display();

    list.deleteFront();
    list.deleteBack();
    list.deleteAtPosition(1);

    list.display();

    return 0;
}