#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j;
    cout<< "Enter the number of rows\n";
    cin>> a;
    cout<< "Enter the number of columns\n";
    cin>> b;
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<< "Enter the element of the array at the indice "<<i<< ""<<j<< endl;
            cin>> arr[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<< "The elements at indices "<<i<< "" <<j<< " is "<< arr[i][j]<< endl;
        }
    }


}
