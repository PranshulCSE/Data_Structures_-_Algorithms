#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Link
{
    Node *head;
    Node *tail;

public:
    Link()
    {
        head = NULL;
        tail = NULL;
    }
    // Inserting at front
    void InsertF(int val)
    {
        Node *NewNode = new Node(val);
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        NewNode->next = head;
        head = NewNode;
    }
    // Inserting at Back
    void InsertB(int val)
    {
        Node *NewNode = new Node(val);
        if (head == NULL)
        {
            head = tail = NewNode;
            return;
        }
        tail->next = NewNode;
        tail = NewNode;
    }
    // Insert at Specific Point
    void InsertS(int val, int pos)
    {
        Node *NewNode = new Node(val);
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        Node *temp = head;
        pos--;
        while (pos--)
        {
            temp = temp->next;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;
    }
    void Delete_Head()
    {
        // Single Edge Case
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void Delete_Tail()
    {
        // 3 Edge Cases
        if (head != NULL)
        {
            // Only a Single Node is Present in Linked List
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            // More then one Nodes are Present there
            else
            {
                Node *current = head;
                Node *previous = NULL;
                while (current->next != NULL)
                {
                    previous = current;
                    current = current->next;
                }
                previous->next = NULL; // Or we can say current->next
                delete current;
            }
        }
    }
    void Delete_Specific(int pos)
    {
        // single Edge Case Whether we want to delete Head
        if (pos == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *current = head;
            Node *previous = NULL;
            pos--;
            while (pos--)
            {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
            delete current;
        }
    }
    // Displaying Linked List Elements
    void display()
    {
        Node *temp = head;
        cout << "\nLinked List Elements are: \n";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Link List;
    List.InsertB(11);
    List.InsertB(21);
    List.InsertB(31);
    List.InsertB(41);
    List.InsertB(51);
    List.InsertB(61);
    List.InsertB(71);
    List.InsertS(1001, 3);
    List.display();
    List.Delete_Head();
    List.display();
    List.Delete_Tail();
    List.display();
    List.Delete_Specific(3);
    List.display();
}