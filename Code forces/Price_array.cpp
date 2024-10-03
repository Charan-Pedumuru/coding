#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    int arr[4][5];
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<< "Enter the prices of "<<i+1<< " person"<<endl;
            cin>> arr[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<< "List of hari is"<<arr[0][j]<<endl;
            cout<< "List of priya is"<<arr[1][j]<<endl;
            cout<< "List of poorna is"<<arr[2][j]<<endl;
            cout<< "List of chandra is"<<arr[3][j]<<endl;
        }
    }
}
