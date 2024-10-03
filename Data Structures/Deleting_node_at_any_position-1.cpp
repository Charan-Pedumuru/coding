#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *link;

}*head,*temp,*p;

void insert(int a,int b)
{
    temp=new node();
    temp->data=a;
    temp->link=NULL;

    if(b==1)
    {  
        temp->link=head;
        head=temp;
    }
    else
    {
        p=head;
        for(int i=0;i<b-2;i++)
        {
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;
    }

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
    int n,d,p;
    head=NULL;

    cout<<"Enter the number of nodes : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data along with position"<<endl;
        cin>>d>>p;

        insert(d,p);
        print();
    }
    
    int e;
    cout<<"Enter the position to be deleted : ";
    cin>>e;
    Delete(e);
    print();


}