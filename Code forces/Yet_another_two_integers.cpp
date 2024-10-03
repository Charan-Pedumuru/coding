#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,a,b,k={1,2,3,4,5,6,7,8,9,10},count=0;
    cin>> t;
    for(i=0;i<t;i++)
    {
       cin>>a>>b;
    }
    for(i=0;i<t;i++)
    {
        if(a>b)
    {
        while(a<=b)
        {
            a-=k;
            count++;
        }
    }
    else if(b>a)
    {
        while(b<=a)
        {
            a+=k;
            count++;
        }
    }
    }

}
