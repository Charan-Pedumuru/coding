#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double x,y;
    cin>>x>>y;

    if(x==0 && y==0)
    cout<<"Orgin"<<endl;
    else if(x==0)
    cout<<"X-axis"<<endl;
    else if(y==0)
    cout<<"Y-axis"<<endl;
    else if(x>0)
    {
        if(y>0)
        cout<<"Q1"<<endl;
        else
        cout<<"Q4"<<endl;
    }
    else
    {
        if(y>0)
        cout<<"Q2"<<endl;
        else
        cout<<"Q3"<<endl;
    }
}