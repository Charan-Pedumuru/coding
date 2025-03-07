#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i;
    cout<< "Enter the size of an array\n";
    cin>> a;
    int arr[a];
    for(i=0;i<a;i+=1)
    {
        cout<< "Enter an element at index "<<i<<endl;
        cin>> arr[i];
    }
    for(i=0;i<a;i++)
    {
        cout<< "The elements at index "<<i<<" is "<< arr[i]<< "\n";
    }
}
