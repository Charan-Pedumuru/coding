#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int arr[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int op,p,f;
    scanf("%d",&op);
    if(op==1)
    {
        p=0;
        
        while(p!=8)
        {
            f=0;
            for(int i=0;i<a;i++)
            {
            for(int j=0;j<a;j++)
                {
                if(arr[i][j]==p)
                    {
                    f++;    
                    }
                }
            }
        printf("%d ",f);
        p++;
        }
       
    }
    else if(op==2)
    {
        p=0;
        f=0;
        
        while(p!=8)
        {
            for(int i=0;i<a;i++)
            {
            for(int j=0;j<a;j++)
                {
                if(arr[i][j]==p)
                    {
                    f++;    
                    }
                }
            }
        printf("%d ",f);
        p++;
        }
        
    }
    else if(op==3)
    {
        
    }
    else if(op==4)
    {
        
    }
    else
    {
        
    }
    return 0;
}