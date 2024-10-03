#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10];
    int *x=&arr[0];
    int *x1=&arr[1];
    int *x2=&arr[2];

    cout<< "The size of an integer element in an array is " << x << endl;
    cout<< "The size of an integer element in an array is " << x1 << endl;
    cout<< "The size of an integer element in an array is " << x2 << endl;

    x+=2;
    cout<< "The new storage of x is " << x << endl;
    x--;
    cout<< "The new storage of x now is " << x << endl;
}
