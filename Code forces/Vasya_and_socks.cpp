#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n >>m;
     if(n==m && n!=4 && m!=4)
     cout<< n+m-1;
     else if(n<m)
     cout<<n;
     else if(n==4 && m==4)
     cout<<n+m-3;
     else
     cout<<n+m+1;
}
