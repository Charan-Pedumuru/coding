#include<bits/stdc++.h>

using namespace std;

void printmessage(int x)
{
    cout<< "I am printing an integer variable "<< x <<endl;
}
void printmessage(float x)
{
    cout<< "I am printing a float variable "<< x <<endl;
}
int main()
{
    int a=32;
    float b=23.78;

    printmessage(a);
    printmessage(b);
}
