#include<bits/stdc++.h>

using namespace std;


void increment(int *p)
{
    *p= *p+1;
}
int main()
{
    int a;
    a=10;

    increment(&a);
    cout<<a<<endl;
}
