#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,i,j,k;
    cout<< "Enter the total number of arrays\n";
    cin>> a;
    cout<< "Enter the number of rows\n";
    cin>> b;
    cout<< "Enter the number of columns\n";
    cin>> c;
    int arr[a][b][c];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                cout<< "Enter the element at the indice "<<i<< ""<<j<< ""<<k<< endl;
                cin>> arr[i][j][k];
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                cout<< "The element at the indice "<<i<< ""<<j<< ""<<k<< " is "<<arr[i][j][k]<< endl;
            }
        }
    }
}
