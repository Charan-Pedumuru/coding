#include<stdio.h>
int main()
  {
    int x;
    printf("Select the working hours on october 15\n 1.Full day\n 2.Half day\n 3.holiday\n");
    scanf("%d",&x);
    if(x==1)
        printf("He travels 2240 km to attend conference at Delhi");
    else if(x==2)
        printf("He travels 390 km to attend conference at Chennai");
    else
        printf("He travels 640 km for a holiday at Goa");
    return 0;

 }
