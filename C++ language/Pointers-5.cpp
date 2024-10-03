#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=5;
    int *p;
    p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<**r<<endl;
    cout<<***r<<endl;
    cout<<&p<<endl;

    ***r=10;
    cout<<x<<endl;

    **q=*p+2;
    cout<<x<<endl;

    ***r=**q+*p;
    cout<<*p<<endl;
}
