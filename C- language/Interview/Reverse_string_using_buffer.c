#include <stdio.h>
#include <string.h>

int main()
{
    char str[25] = "Hello";
    char temp;
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    printf("%s", str);
}