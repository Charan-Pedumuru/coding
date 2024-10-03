#include<bits/stdc++.h>

using namespace std;

int factorial(int x);
int main()
{
    int a;
    cout<< "Enter a number to find it's factorial\n";
    cin>> a;
    cout<< "The factorial of "<<a<< " is "<<factorial(a)<<endl;
}

int factorial(int x)
{
if(x==1)
{
    return 1;
}
else
{
    return x*factorial(x-1);
}
}
