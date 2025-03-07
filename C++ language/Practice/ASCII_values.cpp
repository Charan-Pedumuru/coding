#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;         // ASCII values of 0 to 9 are 40 to 57,  A to Z are 65 to 90 and a to z are 97 to 123

    if(ch>='0' && ch<='9')
    cout<<" It's a digit"<<endl;
    else if(ch>='a' && ch<='z')
    cout<<" It's a small letter"<<endl;
    else
    cout<<" It's a capital letter"<<endl;

}