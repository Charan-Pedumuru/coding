#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *link;
}*top,*temp,*p;

void push(int a)
{   
    temp=new node();
    temp->data=a;
    temp->link=top;
    top=temp;
}

void pop()
{
    if(top==NULL) return;
    temp=top;
    top=top->link;
    delete(temp);
}
void print()
{
    cout<<"The list is ";
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->link;
    }
    cout<<endl;
}

void topp()
{
    p=top;
    cout<<"The top element is "<<p->data<<endl;
    
}

void isempty()
{
    if(top==NULL)
    cout<<"true"<<endl;

    cout<<"false"<<endl;
}
int main()
{
    top=NULL;
    push(23);
    push(24);
    push(21);
    pop();
    isempty();
    print();
    topp();
}