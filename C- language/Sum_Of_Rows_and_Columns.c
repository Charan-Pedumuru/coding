#include <stdio.h>

void main()
{
     int i,j,k,n;

     printf("Enter a square matrix : ");
     scanf("%d", &n); 

     int arr[n][n],rsum[n],csum[n];

       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
            
        }  


     for(i=0;i<n;i++)
     {
	    rsum[i]=0;
	    for(j=0;j<n;j++)
	    rsum[i]+=arr[i][j];
     }
 
      for(i=0;i<n;i++)
      {
	     csum[i]=0;
	     for(j=0;j<n;j++)
		   csum[i]+=arr[j][i];
      }
 
       for(i=0;i<n;i++)
       printf("%d\t",rsum[i]);


	    for(j=0;j<n;j++)
	    printf("%d\t",csum[j]);
 

  }