#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*head,*temp,*p;

node *ll(int a)
{
    temp=new node();
    temp->data=a;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        p=head;
        while(p->next!=NULL)
        p=p->next;
        p->next=temp;
    }
    return head;
}

void print()
{
    cout<<"The linked list is ";
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
}

int main()
{
    head=NULL;
    head=ll(11);
    head=ll(9);
    print();
}