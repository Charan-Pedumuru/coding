#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:
    int data;
    node *link;

}*head,*temp,*p;

node*linked_list(int a)
{
    for(int i=0;i<a;i++) 
    {
        temp=new node();
        cout<<"Enter the data at node-"<<i+1<<" : ";
        cin>>temp->data;
        temp->link=NULL;

        if(head==NULL)
        head=temp;

        else
        {
            p=head;
            while(p->link!=NULL)
            p=p->link;

            p->link=temp;
        }
    }
    return head;
}

node* reverse() 
{
    node *current,*prev,*link;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        link=current->link;
        current->link=prev;
        prev=current;
        current=link;

    }
    head=prev;
    return head;
}

void print(node *head)
{
    cout<<"The list is"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<"\t";
        head=head->link;
    }
    cout<<endl;
}

int main()
{
    int n;
    head=NULL;

    cout<<"Enter the number of nodes to be inserted : ";
    cin>>n;

    head=linked_list(n);
    print(head);
    head=reverse();
    print(head);

}