#include<bits/stdc++.h>

using namespace std;
 int mul(int a, int b);
 int main()
 {
     int x,y,res;
     cout<< "Enter any two values\n";
     cin>> x;
     cin>> y;
     res=mul(x,y);
     cout<< "The multiplication of two numbers is "<<res<<endl;
     return 0;
 }

 int mul(int a, int b)
 {
     return a*b;
 }

