#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int a,*p;
    a=10;
    p=&a;
    cout<<*p<<endl;
    *p=12;
    cout<<&a<<endl;
    cout<<p<<endl;        // Address of the value in ram
    cout<<*p<<endl;       //value stored in address
    cout<<(p+1)<<endl;
    cout<<(p+2)<<endl;
    cout<<*(p+1)<<endl;   // incrementing the value in an address gives a garbage value
}
