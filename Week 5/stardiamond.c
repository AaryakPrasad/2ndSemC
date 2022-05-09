#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i =1 ; i <=n; i++)
    {
        for (j = 0; j < (n-i); j++)
            printf(" ");
        for (k = 1; k <= i ; k++)
            printf("* ");
    printf("\n");
    }
    for (i = n-1; i >=1; i--)
    {
        for (j = n; j>i; j--)
            printf(" ");
        for (k = 1;k <=i; k++)
            printf("* ");
    printf("\n");
    }
    
return 0;
}
    
        
        
        