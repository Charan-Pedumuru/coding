#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=n;

    int r,rev=0;

    while(n!=0)
    {
        r=n%10;
        rev=rev*10 +r;
        n/=10;
    }
    cout<<rev<<endl;

    (a==rev)? cout<<"Palindrome" : cout<<"Not a palindrome"<<endl;
}