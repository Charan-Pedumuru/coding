#include<bits/stdc++.h>

using namespace std;
 int main()
 {
     int a,i,sum=0;
     cout<< "Enter the size of an array\n";
     cin>> a;
     int arr[a];
     for(i=0;i<a;i++)
     {
         cout<< "Enter the element at index "<<i<<endl;
         cin>> arr[i];
         sum+=arr[i];
     }
     cout<< "The sum of the elements in the array is "<<sum<<endl;

 }
