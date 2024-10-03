#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c[]="HELLO";
    char *c1;

    c1=c;
    printf("%c\n",c1[1]);
    printf("%c\n",*(c1+1));
    printf("%c\n",c1+1);
    printf("%c\n",++c1);

}
