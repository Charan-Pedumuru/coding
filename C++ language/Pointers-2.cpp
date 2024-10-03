#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=1025;
    int *p;
    p=&a;
    cout<<"The size of the integer is "<<sizeof(a)<<endl;
    cout<<"Address is "<<p<<" The value is "<<*p<<endl;
    char *p0;
    p0=(char*)p;
    cout<<"The size of the character is "<<sizeof(char)<<endl;
    cout<<"Address is "<<p0<<" The value is "<<*p0<<endl;
}
