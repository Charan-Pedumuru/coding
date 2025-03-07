#include<bits/stdc++.h>

using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);
int main()
{
int a=32;
int b=46;

passbyvalue(a);
passbyreference(&b);
cout<< a << endl;
cout<< b << endl;
}

void passbyvalue(int x)
{
  x=99;
}
void passbyreference(int *x)
{
    *x=56;
}
