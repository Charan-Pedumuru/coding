#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; string s;
    cin>>t;
    getline(cin,s);      //This 1st getline is to take \n or buffer from the input (flush out \n)

    while(t--)           //Usage of getline function for taking t sentences without empty string
    {
        getline(cin,s);
        cout<<s<<endl;
    }
    
}