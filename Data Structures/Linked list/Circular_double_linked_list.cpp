#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

// Function to insert a node at the end
void insertEnd(Node *&head, int value)
{
    Node *newNode = new Node{value, nullptr, nullptr};
    if (!head)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }
    Node *last = head->prev;
    last->next = newNode;
    newNode->prev = last;
    newNode->next = head;
    head->prev = newNode;
}

// Function to display the circular doubly linked list
void display(Node *head)
{
    if (!head)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(Back to head)" << endl;
}

int main()
{
    Node *head = nullptr;
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    display(head);
    return 0;
}
