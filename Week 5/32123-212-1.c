#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = n; i>=1; i--)
    {
        for ( j = n; j>i; j--)
            printf(" ");
        for ( k = i; k >=1; k--)
            printf("%d",k);
        for ( m = 2; m <=i; m++)
            printf("%d",m);
    
    printf("\n");
    }
return 0;
}

    