#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,sum=0;
    int i,j,k;

    scanf("%d%d",&r1,&c1);
   

    int arr[r1][c1];

 	for(i=0;i<r1;i++)
  	{
   		for(j=0;j<c1;j++)
      	scanf("%d", &arr[i][j]);
    	
  	}

   scanf("%d%d",&r2,&c2);
   int arr1[r2][c2],multiply[r1][c2];

 	for(i=0;i<r2;i++)
  	{
   		for(j=0;j<c2;j++)
      	scanf("%d", &arr1[i][j]);
    	
  	}

      if(c1!=r2)
      printf("Matrix multiplication is not possible\n");

      else
      {
          for(i=0;i<r1;i++)
  	      {
   		    for(j=0;j<c2;j++)
            {
               for(k=0;k<r2;k++)
               {
                   sum+=arr[i][k]*arr1[k][j];
               }
               multiply[i][j]=sum;
               sum=0;
            }
            
  	      }
   

          for(i=0;i<r1;i++)
         {
           for(j=0;j<c2;j++)
           printf("%d\t",multiply[i][j]);

           printf("\n");
        }
      }
    
    
   
}