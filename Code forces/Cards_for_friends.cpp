#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,w,h,i,c;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>w >>h >>n;

        if(w%2==0 && h%2==0)
        {
            c=(w/2)*h;
            c+=1;
            if(c>=n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(w%2==0)
        {
            c=(w/2)*h;
            c+=1;
            if(c>=n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(h%2==0)
        {
            c=w*(h/2);
            c+=1;
            if(c>=n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(w%2!=0 && h%2!=0)
        {
            if(n=1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(w==1 && h%2==0)
        {
            c=w*(h/2);
            c+=2;
            if(c>=n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }

}
