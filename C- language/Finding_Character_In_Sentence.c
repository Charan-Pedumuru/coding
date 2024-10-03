#include<stdio.h>
#include<string.h>

int main()
{
    char str[150];
    int vowel=0,cons=0,digit=0,space=0;

    scanf("%[^\n]",str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
       vowel++;

       else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
       cons++;

       else if(str[i]>='0' && str[i]<='9')
       digit++;

       else if(str[i]==' ')
       space++;
    }

    printf("The consonants are %d\n",cons);
    printf("The vowels are %d\n",vowel);
    printf("The digits are %d\n",digit);
    printf("The spaces are %d\n",space);
}