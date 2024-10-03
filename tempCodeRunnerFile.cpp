#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p=9;

    int *x;

    x=&p;
    int **y=&x;

    cout<<x<<endl;
    cout<<&p<<endl;
    cout<<**y<<endl;
}