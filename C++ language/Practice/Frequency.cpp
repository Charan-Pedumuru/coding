#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j,e,c=0;
    cout<< "Enter the size of an array"<<endl;
    cin>> a;
    int arr[a];
    cout<< "Enter the elements to the array"<<endl;

    for(i=0;i<a;i++)
    cin>> arr[i];

    for(i=0;i<a;i++)
    {
        c=1;

        for(j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }

        }
        cout<< "The frequency of the element "<<arr[i]<<" is "<<c<<endl;

    }

}
