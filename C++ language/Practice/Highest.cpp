#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,j;
    cin>>x>>y>>z>>j;
    if(x>y && x>z && x>j)
    cout<<x-y<< " "<<x-z<< " "<<x-j<<endl;
    else if(y>x && y>z &&y>j)
    cout<<y-x<< " "<<y-z<< " "<<y-j<<endl;
    else if(z>x && z>y && z>j)
    cout<<z-x<< " "<<z-y<< " "<< z-j<<endl;
    else
    cout<<j-x<< " "<< j-y<< " "<< j-z<<endl;
}
