#include<bits/stdc++.h>

using namespace std;

int main()
{
    int age, sum=0,n=0;
    cout<< "Enter the age of first person : ";
    cin>> age;
    while(age!=-1)
    {
        cout<< "Enter the age of next person or Enter -1 to quit\n";
        cin>> age;
        sum=sum+age;
        n++;
    }
    cout<< "The total number of people are "<<n<< "\n";
    cout<< "The average age of "<<n<< " people is "<< sum/n<< "\n";

    return 0;
}
