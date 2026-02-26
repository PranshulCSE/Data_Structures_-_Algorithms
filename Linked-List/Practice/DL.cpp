#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Link
{
    Node *head;
    Node *tail;

public:
    Link()
    {
        tail = head = NULL;
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

        else
        {
            NewNode->next = head;
            head->prev = NewNode;
            head = NewNode;
        }
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
        NewNode->prev = tail;
        tail = NewNode;
    }
    // Insert at Specific Point
    void InsertS(int val, int pos)
    {
        if (pos == 0)
        {
            // Linked-List doesn't exist
            if (head == NULL)
            {
                Node *NewNode = new Node(val);
                head = NewNode;
                return;
            }
            // Linked-List exist
            else{
                Node *temp=new Node(val);
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
        }
        // If Position is not equal to Zero
        else{
            // Checking if we have to  insert the Node at Last
            Node *NewNode=new Node(val);
            Node* curr=head;
            while(--pos){
                curr=curr->next;
            }

            // if we have to insert that node in last
            if(curr->next==NULL){
                curr->next=NewNode;
                NewNode->prev=curr;
            }
            else{
                NewNode->next=curr->next;
                NewNode->prev=curr;
                curr->next=NewNode;
                NewNode->next->prev=NewNode;
            }
        }
    }
    void Delete_Head()
    {
        // Single Edge Case
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            if(head)
            head->prev=NULL;
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
                
                while (current)
                {
                    current = current->next;
                }
                current->prev->next = NULL; 
                delete current;
            }
        }
    }
    void Delete_Specific(int pos)
    {
        // single Edge Case Whether we want to delete Head
        if (pos == 1)
            if (head != NULL)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                if (head)
                    head->prev = NULL;
            }
        else
        {
            Node *current = head;
            while (--pos)
            {
                current = current->next;
            }
           if(current->next == NULL){
            current->prev->next=NULL;
            delete current;
           }
           else{
            current->prev->next=current->next;
            current->next->prev=current->prev;
            delete current;
           }
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
}