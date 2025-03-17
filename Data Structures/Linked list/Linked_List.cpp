#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* link;
} *head, *temp, *temp1, *temp2, *transversal;

int main() {
    head = NULL;

    // Creating first node
    temp = new node();
    temp->data = 2;
    temp->link = NULL;
    head = temp; // Setting head to point to first node

    // Creating second node
    temp1 = new node();
    temp1->data = 4;
    temp1->link = NULL;
    temp->link = temp1;

    temp2 = new node();
    temp2->data = 6;
    temp2->link = NULL;
    temp1->link=temp2;

    // Traversing and printing the linked list
    transversal = head;
    cout << "The stored data is:" << endl;
    while (transversal != NULL) {
        cout << transversal->data << endl;
        transversal = transversal->link;
    }

    return 0;
}
