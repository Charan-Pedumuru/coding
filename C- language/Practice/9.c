#include<stdio.h>
 void main()
 {
     int m,i,j;
     printf("Enter the number of members in the team\n");
     scanf("%d",&m);
     int arr[m];
     for(i=0;i<m;i++)
     {
         printf("Enter the credits of each member\n");
         scanf("%d",&arr[i]);
     }
     if(arr[i]>=100);
     {

          printf("The count will not be considered");

             for(j=0;j<m;j++)

            {
                if(arr[i]>=100 && arr[i]==arr[j])
                printf("Your team is disqualified");
                break;

            }
    }
    else
    printf("Your team has been qualified");

 }



