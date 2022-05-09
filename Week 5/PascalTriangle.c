#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n,x=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {   
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {    
        if (k==0)
            x=1;
        else
            x=x*(i-k+1)/k;   
            printf("%2d",x);
        }     
    printf("\n");
    }
return 0;
}  
        