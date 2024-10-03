#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2==0)
    cout<< pow(-1,n)*(n/2) <<endl;
    else
    cout<< pow(-1,n)*(n/2)-1<<endl;
}
