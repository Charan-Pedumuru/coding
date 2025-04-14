#include<bits/stdc++.h>
using namespace std;

void push(int a);
void pop();
int Top();
bool isempty();
void print();

#define n 10
int top=-1;
int arr[n];

int main()
{
    push(2);print();
    push(3);print();
    pop();print();
    push(12);print();
    push(4);print();
    cout<<isempty()<<endl;
}

void push(int a)
{
    if(top==n-1)
    {
        cout<<"Error: stack overflow"<<endl;
        return;
    }
    top+=1;
    arr[top]= a;

}

void pop()
{
    if(top==-1)
    {
        cout<<"Error: no element to pop"<<endl;
        return;
    }
    top-=1;
}

int Top()
{
    return arr[top];
}

bool isempty()
{
    if(top==-1)
    return true;

    else
    return false;
}
void print()
{
    cout<<"The array is ";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
