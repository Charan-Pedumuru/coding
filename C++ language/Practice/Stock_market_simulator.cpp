#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,t;
    float p,r,si;
    cout<< "Enter the principle amount \nEnter the rate for the amount\nEnter the time duration in days\n\n";
    cin>> p >> r >> t;
    for(i=1;i<=t;i++)
    {
        si= p* pow(1+r,i);
        cout<< "the amount on day "<<i<< " is "<<si<< "\n";
    }
}
