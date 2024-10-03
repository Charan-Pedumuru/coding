#include <stdio.h>

int main()
{
    char word[50];
    FILE *f;
    f = fopen("D:\\Visual codes\\sample.txt", "w");
    
    if (f == NULL)
    printf("It is null!");

    printf("Enter a sentence: \n");
    fgets(word, sizeof(word), stdin);
    fprintf(f,"%s",word);
    fclose(f);

}