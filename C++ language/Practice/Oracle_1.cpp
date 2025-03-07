//Find the row with maximum number of 1s? Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a][a];
    int arr1[a];

    for(int i=0;i<a;i++)
    for(int j=0;j<a;j++)
    cin>>arr[i][j];

    

    for(int i=0;i<a;i++)
    {
        int s=0;
        for(int j=0;j<a;j++)
        {
            s+=arr[i][j];

        }
        arr1[i]=s;
    }
    int max=arr1[0];
    int x=0;

    for(int i=0;i<a;i++)
    {
        if(arr1[i]>max)
        {
            max=arr1[i];
            x=i;
        }
    }
    cout<<"The row with highest number of 1's is "<<x<<endl;

}