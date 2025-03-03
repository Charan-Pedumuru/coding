#include<stdio.h>
#include<string.h>

int main()
{
    char c[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("size of c: %d\n", sizeof(c));
    printf("Length of c: %d\n", strlen(c));
    printf("%s\n", c);

    char *c1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam nec odio eget nunc tincidunt aliquam";
    printf("size of c1: %d\n", sizeof(c1));
    printf("Length of c1: %d\n", strlen(c1));
    printf("%s\n", c1);
    return 0;
}