#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,m,h;
    cout<< "Enter your age \n";
    cin>> a;
    cout<< "Select the option where your marks lies\n 1.In between 700 to 800\n 2.In between 800 to 900\n 3.In between 900 to 1000\n\n";
    cin>> m;
    cout<< "Do you have any health issues?\n 1.Yes\n 2.No\n\n";
    cin>>h;
    if(a>=18 && h==2 && m!=1 )
    {
        cout<< "You are eligible to join our university";
    }
    else
        cout<< "Sorry! you are not eligible";

}
