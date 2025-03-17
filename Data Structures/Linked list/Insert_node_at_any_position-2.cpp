#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *link;

} *head, *temp, *p;

void insert(int a, int b)
{
    temp = new node();
    temp->data = a;
    temp->link = NULL;

    if (b == 1)
    {
        temp->link = head;
        head = temp;
        return;
    }
    else
    {
        p = head;
        for (int i = 0; i < b - 2; i++)
            p = p->link;

        temp->link = p->link;
        p->link = temp;
    }
}
void print()
{
    p = head;
    cout << "The list is" << endl;
    while (p != NULL)
    {
        cout << p->data << "\t";
        p = p->link;
    }
    cout << endl;
}

int main()
{
    int n, d, p;
    head = NULL;

    cout << "Enter the number of new nodes to be inserted : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data and its position to be inserted" << endl;
        cin >> d >> p;

        insert(d, p);
        print();
    }
}