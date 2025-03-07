#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r; string s;
    cin>>t;
    

    while(t--)           //Usage of getline function when there are integers between the strings
    {
        getline(cin,s);   //This 1st getline is to take \n or buffer from the input (flush out \n)
        getline(cin,s);
        cin>>l>>r;
        cout<<s<<endl;
    }
    
}