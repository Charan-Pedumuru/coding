#include<iostream>

using namespace std;

void add(int a, int b);
int main()
{
    int x,y;
    cout<< "Enter any two numbers"<<endl;
    cin>> x;
    cin>> y;
    add(x,y);
    return 0;
}

void add(int a, int b)
{
    int res;
    res=a+b;
    cout<< "The sum of the two numbers is "<<res<< endl;
}
