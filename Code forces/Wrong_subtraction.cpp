#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    cin>> n>>k;
    if(n%10==0)
    {
       for(i=0;i<k;i++)
       {
           n=n/10;
       }
    }
    else
    {
       for(i=0;i<k;i++)
       {
           if(n%10==0)
           {
               for(i=0;i<k;i++)
               {
                  n=n/10;
               }
           }
           else
           {
              for(i=0;i<k;i++)
              {
                  n=n-1;
              }
           }
       }
    }
    cout<<n<<endl;
}
