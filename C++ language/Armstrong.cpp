#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=n;

    int r,res=0;

    while(n!=0)
    {
        r=n%10;
        res+=r*r*r;
        n/=10;
    }

    cout<<res<<endl;
    (a==res)? cout<<"Armstrong number" : cout<<"Not an armstrong number"<<endl;

}
