#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        cin>>a;
        int arr[2*a];

        for(int j=0;j<2*a;j++)
        cin>> arr[j];

        for(int k=0;k<2*a;k++)
        {
            if((arr[k]+arr[k+1])%2==1)
            {
                if((arr[k+2]+arr[k+3])%2==1)
                {
                    cout<<"Yes"<<endl;
                    break;
                }
                else
                {
                    cout<<"No"<<endl;
                    break;
                }
                
            }
            else
            cout<<"No"<<endl;

        }
        

    }

}