#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i=1,x,sum=0,n;
    cout<< "Enter the number of numbers\n";
    cin>> n;
    while(i<=n)
    {
        cout<< "Enter your "<<i<< " number\n";
        cin>> x;
        sum=sum+x;
        i++;
    }
    cout<< "The sum of the numbers is "<<sum<< "\n";

    return 0;
}
