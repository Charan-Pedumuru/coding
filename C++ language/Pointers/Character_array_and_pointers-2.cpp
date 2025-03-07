#include<bits/stdc++.h>

using namespace std;

void print(const char *c)   //const is a code word which doesn't allow the code to writ. so we can only read code.
{
    while(*c!='\0')
    {
        cout<<*c;
        c++;
    }
    cout<<endl;;
}
int main()
{
    char c[20]="HELLO";
    print(c);
}
