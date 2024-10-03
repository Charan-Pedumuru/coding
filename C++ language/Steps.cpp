#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d,s;
    cout<< "Enter the distance of the elephant's friends house"<<endl;
    cin>> d;
    if(d%5==0)
    {
        s=d/5;
        cout<< "The minimum no of steps are "<<s<<endl;
    }
    else
    {
        s=d/5+1;
        cout<< "The minimum no of steps are "<<s<<endl;
    }
}
