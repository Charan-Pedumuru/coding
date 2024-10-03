#include<bits/stdc++.h>

using namespace std;

int sumofelements(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    sum+=a[i];
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    int sum=0;
    int size=sizeof(a)/sizeof(a[0]);
    int total=sumofelements(a,size);

    cout<< "The sum of the elements is "<<total<<endl;
}
