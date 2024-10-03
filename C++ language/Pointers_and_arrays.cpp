#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5]={3,4,6,7,9};
    int *p;
    p=&arr[0];

    arr[0]=99;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<p+1<<endl;
    cout<<*(p+1)<<endl;
    p=arr;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<arr+1<<endl;
    cout<<*(arr+1)<<endl;
}
