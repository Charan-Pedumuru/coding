 
#include<stdio.h>
 
int main()
{
 	int r,c,Count = 0;
  
 	scanf("%d %d", &r, &c);

    if(r!=c)
    printf("Not a square matrix\n");

    else
    {
        int arr[r][c],arr1[r][c];
 
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
      	scanf("%d", &arr[r][c]);
    	
  	}
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
      	arr1[c][r] = arr[r][c];
    	
  	}
     
 	for(int i=0;i<r;i++)
  	{
   		for(int j=0;j<c;j++)
    	{
    		if(arr[r][c] != -arr1[r][c])
    		{
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 0)
  	printf("Skew Symmetric\n");

	else
	printf("Not skew symmetric\n");
	
 	return 0;
    }
}