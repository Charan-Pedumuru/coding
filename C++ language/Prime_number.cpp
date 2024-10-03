#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=2;i<n-1;i++)
    {
        if (n%i==0)
        c+=1;
        
    }
   switch(c)
   {
    case 0:
    cout<<"Prime"<<endl;
    break;
    default : cout<<"Not prime"<<endl;
   }
}