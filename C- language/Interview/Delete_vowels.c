#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void solve()
{
    
    char c[100];
    int i, j, length = 0;
    printf("Enter a string : ");
    printf("\n");
    // gets(c);
    scanf("%s", c);

    length = strlen(c);

    for (i = 0; i < length; i++) {
       
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' ||
         c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' ) {
           
            for (j = i; j < length; j++) {
              
                c[j] = c[j + 1];
            }
            i--;
            length--;
        }
        c[length + 1] = '\0';
    }
   printf("After Deletion the string will be  : %s", c);
 
}

int main()
{
    solve();
    return 0;
}