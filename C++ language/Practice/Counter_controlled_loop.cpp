#include<bits/stdc++.h>

using namespace std;

int main()
{
    int age,i=1,n,sum=0;
    float avg;
    cout<< "Enter the number of people\n";
    cin>> n;
    while(i<=n)
    {
        cout<< "Enter the age of "<<i<< " person\n";
        cin>> age;
        sum=sum+age;
        i++;
    }
    avg=sum/n;
    cout<< "The average age of "<<n<< " people is "<<avg<< "\n";
    return 0;
}
