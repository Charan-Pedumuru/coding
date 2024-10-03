#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s1,s2;

    char a;

    for(int j=0;j<t;j++)
    {
        cin>>s1>>s2;
        for(int i=0;i<3;i++)
        {
            a=s1[0];
            s1[0]=s2[0];
            s2[0]=a;
        }
        cout<<s1<<" "<<s2<<endl;
    }

    
}