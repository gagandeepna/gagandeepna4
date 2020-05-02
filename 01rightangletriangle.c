#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=0;i<n;++i)
        {
            for(j=0;j<=i;++j)
            {
                printf("01");
            }
            printf("\n");
        }
    }
    else 
    {
        printf("Error!\n Please enter a number greater than or equal to zero.");
    }
    
    
    return 0;
}
