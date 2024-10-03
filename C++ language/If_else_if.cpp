#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int age;
     cout<< "Enter your age\n";
     cin>> age;
     if(age>60)
     {
         cout<< "Wow ! your are old\n";
         if(age>=100)
         {
             cout<< "How are you still live?\n";
         }
     }
     else
     {
         cout<< "You are young.Get yourself a job\n";
     }

     return 0;
 }
