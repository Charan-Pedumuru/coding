#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* link;

}*head,*temp,*t;

void insert(int a)
{
    temp=new node();
    temp->data=a;
    temp->link=head;
    head=temp;
}

void print()
{
    t=head;
    cout<<"The list is"<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->link;
    }
    cout<<endl;
}

int main()
{
    head=NULL;
    int n,x;

    cout<<"Enter the total numbers of data : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<< " number : ";
        cin>>x;

        insert(x);
        print();
    }
}