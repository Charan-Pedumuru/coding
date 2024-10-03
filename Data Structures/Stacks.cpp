#include<bits/stdc++.h>
using namespace std;
#define size 10
int arr[size];
int top=-1;

void push(int a)
{
    if(top==size-1)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    
    top+=1;
    arr[top]=a;
    
}
void pop()
{
    if(top==-1)
    {
        cout<<"No element to pop\n";
        return;
    }
    top-=1;
}

void print()
{
    cout<<"The stack is ";
    for(int i=0;i<=top;i++)
    cout<<arr[i]<<" ";
}

void topp()
{
    cout<<"The element on the top is "<<arr[top]<<endl;
}

void isEmpty()
{
    (top==-1)? cout<<"Empty\n" : cout<<"Not empty"<<endl;
    
}

int main()
{
    push(10);
    pop();
    push(2);
    push(5);
    push(3);
    print();
    topp();
    isEmpty();
}