 
#include<stdio.h>
 
int main()
{
 	int r,c,Count = 0;
  
 	printf("Please Enter Number of rows and columns\n");
 	scanf("%d %d", &r, &c);

    int arr[r][c],arr1[r][c];
 
 	printf("Please Enter the Matrix Elements \n");
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
      	scanf("%d", &arr[r][c]);
    	
  	}
   	//Transpose of matrix 
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
      	arr1[c][r] = arr[r][c];
    	
  	}
     
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
    	{
    		if(arr[r][c] != arr1[r][c])
    		{
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 0)
  	printf("\n The Matrix that you entered is a Symmetric Matrix ");

	else
	printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
	
 	return 0;
}