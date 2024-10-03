#include<stdio.h>

int main()
{
    int i, tab, rows, j = 0, cnt = 0, cntt = 0;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for (i = 1; i <= rows; ++i)
    {
     for (tab = 1; tab <= rows-i; ++tab)
    {
     printf(" ");
     ++cnt;
 }
 while (j != 2*i-1)
 {
   if (cnt<= rows - 1)
   {
    printf("%d ", i +j);
    ++cnt;
 } else
 {
 ++cntt;
 printf("%d ", (i + j - 2*cntt));
 }
 ++j;
 }
 cnt = cntt = j = 0;
 printf("\n");
 }


    return 0;
}
