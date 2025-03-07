#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10,a=5;

    n=n^a;
    a=n^a;
    n=n^a;

    cout<<n<<"\t"<<a<<endl;
}