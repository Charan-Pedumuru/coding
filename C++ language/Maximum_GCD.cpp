#include<bits/stdc++.H>

using namespace std;

int main()
{
    int n,i,j=1,GCD=0;
    cin>> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for(i=0;i<n;i++)
    {
        while(j<=arr[i])
        {
            if(arr[i]%j==0)
            {
                GCD=i;
            }
            j+=1;
        }
    }
    cout<< GCD<< " "<<GCD+1 <<endl;
}
