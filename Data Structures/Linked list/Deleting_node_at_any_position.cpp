#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *link;

}*head,*temp,*p;

node *linkedlist(int d)
{
    for(int i=0;i<d;i++)
    {
        temp=new node();
        cout<<"Enter the data at node- "<<i+1<<" : ";
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
void print()
{
    p=head;
    cout<<"The list is"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->link;
    }
    cout<<endl;

}
void Delete(int a)
{
    node *temp1=head;

    if(a==1)
    {
        head=temp1->link;
        free(temp1);
    }
    else
    {
        for(int i=0;i<a-2;i++)
        temp1=temp1->link;

        node* temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);
    }

}

int main()
{
    int n,d;
    head=NULL;

    cout<<"Enter the number of nodes : ";
    cin>>n;

    head=linkedlist(n);
    print();
    cout<<"Enter the position to be deleted : ";
    cin>>d;
    Delete(d);
    print();


}