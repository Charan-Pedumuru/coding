#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the end
void insertEnd(Node *&head, int value)
{
    Node *newNode = new Node{value, nullptr};
    if (!head)
    {
        head = newNode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

// Function to display the circular linked list
void display(Node *head)
{
    if (!head)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
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
