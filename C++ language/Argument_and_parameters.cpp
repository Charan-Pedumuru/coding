#include<bits/stdc++.h>

using namespace std;

int volume(int l,int w, int h);
int main()
{
    int a,b,c;
    cout << "Enter the length\n";
    cin>> a;
    cout << "Enter the width\n";
    cin>> b;
    cout<< "Enter the height\n";
    cin>> c;
    cout<< volume(a,b,c);
}
int volume(int l,int w, int h)
{
    return l*w*h;
}
