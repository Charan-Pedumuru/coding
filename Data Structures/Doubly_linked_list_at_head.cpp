#include<bits/stdc++.h>
using namespace std;

class node
{
  public:
  int data;
  node *link;
  node *prev;

}*head,*temp;

node *new_node(int x)
{
    temp=new node();
    temp->data=x;
    temp->prev=NULL;
    temp->link=NULL;

    return temp;
}

void insert_at_head(int a)
{
    node *newnode=new_node(a);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->link=head;
    head=newnode;
}

void print(node* h)
{
    cout<<"The list in forward order :"<<endl;
    while(h!=NULL)
    {
        cout<<h->data<<"\t";
        h=h->link;
    }
    cout<<endl;
}

void reverse_print(node *h)
{
    if(h==NULL)       // empty list, exit
    return;

    while(h->link!=NULL)  // going to last node
    h=h->link;

    cout<<"The list in reverse order :"<<endl;
    while(h!=NULL)                // Transversing backward using prev pointer
    {
        cout<<h->data<<"\t";
        h=h->prev;
    }
    cout<<endl;
}

int main()
{
    head=NULL;
    
    insert_at_head(2); print(head); reverse_print(head);
    insert_at_head(3); print(head); reverse_print(head);
    insert_at_head(4); print(head); reverse_print(head);


}