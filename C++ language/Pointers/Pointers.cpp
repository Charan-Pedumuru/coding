#include<bits/stdc++.h>
using namespace std;

int* add(int* q,int* w);
int* subtract(int* q,int* w);
int* multiply(int*q,int*w);

int main()
{
    int c,b;
    cout<<"Enter two numbers: ";
    cin>>c>>b;

    int *a,*s,*m,*x=&c,*y=&b;
    int* (addp)(int,int*);
    int* (subtractp)(int,int*);
    int* (multiplyp)(int,int*);

    addp=add;
    subtractp=subtract;
    multiplyp=multiply;

    a=addp(x,y);
    s=subtractp(x,y);
    m=multiplyp(x,y);

    cout<<"The sum of numbers is: "<<*a<<endl;
    cout<<"The difference of numbers is: "<<*s<<endl;
    cout<<"The product of numbers is: "<<*m<<endl;

}
int* add(int* q,int* w)
{
    int* ptr=(int*)malloc(sizeof(int));
    *ptr=*q+*w;
    return ptr;
}
int* subtract(int* q,int* w)
{
    int* ptr=(int*)malloc(sizeof(int));
    *ptr=*q-*w;
    return ptr;
}
int* multiply(int*q,int*w)
{
    int*ptr=(int*)malloc(sizeof(int));
    *ptr=*q * *w;
    return ptr;
}
