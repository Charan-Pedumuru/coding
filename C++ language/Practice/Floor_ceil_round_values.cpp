#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<a/b<<endl; // floor value
    cout<<(a+b-1)/b<<endl; //Ceil value
    cout<<(2*a+b)/(2*b)<<endl; //Round value
} 