#include<stdio.h>
int RepeatingElement(int array[], int n) 
{
    int element, count, maxCount = 0;
    
    for(int i=0;i<n;i++)   
    {
        count = 1;
        for(int j=i+1;j<n;j++)  
        {
            if(array[j] == array[i])
            {
                count++;

                if(count > maxCount)
                {
                    element = array[j];
                }
            }
        }
    }
    return element;
}

int main()
{
    int n;              
    printf("Enter the number of elements ");
    scanf("%d",&n); 

    int array[n];      
    printf("Enter the array elements");

    for(int i=0;i<n;i++)   
    scanf("%d",&array[i]);
    
    int element=RepeatingElement(array, n);    
    printf("\nMaximum Repeating Element : %d",element);

    return 0;
}