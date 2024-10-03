#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* link;
}*head,*temp,*temp1;

int main()
{
    head=NULL;

    temp=new node();                     // Creating dynamic memory allocation
    temp->data=2;                      // Inserting elements into the node
    temp->link=NULL;
    head=temp;


    temp=new node();
    temp->data=4;
    temp->link=NULL;
    head=temp;

    temp1=head;
    cout<<"The stored data is "<<endl;                            // Process of traversal in linked list
    while(temp1!=NULL)
    {
        temp1=temp1->link;
        cout<<temp->data<<endl;
    }
    temp1->link=temp;


}
