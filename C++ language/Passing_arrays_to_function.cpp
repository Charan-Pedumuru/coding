#include<bits/stdc++.h>

using namespace std;

void printarray(int arr[],int a);
int main()
{
   int x,i;
   cout<< "Enter the size of an array\n";
   cin>> x;
   int arr[x];
    for(i=0;i<x;i+=1)
    {
        cout<< "Enter an element at the index "<<i<<endl;
        cin>> arr[i];
    }
   printarray(arr,x);
}

void printarray(int arr[],int a)
{

    int i;
    for(i=0;i<a;i++)
    {
        cout<< "The elements at index "<<i<< " is "<<arr[i]<<endl;
    }

}
