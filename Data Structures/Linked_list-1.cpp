#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

}*head,*temp,*p;

node *linklist(int a)
{
    for(int i=0;i<a;i++)
    {
        temp=new node();                                        // Creating individual nodes without any link (Individual isolated node)
        cout<<"Enter the data for node number- "<<i+1<<" : ";
        cin>>temp->data;
        temp->next=NULL;
 
        if(head==NULL) 
        {
            head=temp;
        }
        else
        {
            p=head;                     // linking the address to the node(transversal)
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;

        }
    }
    return head;

}

void display_list()
{
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int n;
    head=NULL;

    cout<<"Enter the number of nodes : ";
    cin>>n;

    head=linklist(n);
    display_list();

}