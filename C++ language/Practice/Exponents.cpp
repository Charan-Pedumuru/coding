// Given 4 numbers a,b,c,d. If a^b>c^d, print YES else NO , Note that values of a, b, c, d are very high
// Aplly log on both sides, then b*log(a)>d*log(c), this condition should be checked

#include<bits/stdc++.h>
using namespace std;
using ld= long double;

int main()
{
    ld a,b,c,d;
    cin>>a>>b>>c>>d;              // 1e-12 or 1e-9 is used to check more decimal places like 4.9999999999> 4.9999999998

    (b*log(a)>d*log(c) + 1e-12) ? cout<<"Yes"<<endl : cout<<"No"<<endl;

}