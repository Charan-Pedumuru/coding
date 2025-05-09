// Maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int cur_sum=0, max_sum=0;

    for(int i=0;i<n;i++)
    {
        cur_sum+=arr[i];
        max_sum=max(cur_sum, max_sum);
        if(cur_sum<0)
            cur_sum=0;
    }
    cout<<"Maximum subarray sum is "<<max_sum<<endl;
    
}