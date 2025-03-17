#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* link;

}*head,*temp,*p,*t;

void insert( int d, int a)
{
    temp=new node();
    temp->data= d;
    temp->link=NULL;

    if(a==1)
    {
        temp->link=head;
        head=temp;
        return;
    }

    p=head;
    for(int i=0;i<a-2;i++)
    {
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;

}

void print()
{
    t=head;
    cout<<"The list is"<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<"\t";
        t=t->link;
    }
}

int main()
{
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
}