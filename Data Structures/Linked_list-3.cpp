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
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
}

int main()
{
    int n,t;
    cout<<"Enter the size of the list : ";
    cin>>n;
    head=NULL;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<" : ";
        cin>>t;
        head=ll(t);
    }
    print();

}