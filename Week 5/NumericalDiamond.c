#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i =1 ; i <=n; i++)
    {
        for ( j = 1; j <= (n-i); j++)
            printf(" ");
        for ( k = 1; k <= i; k++)
            printf("%d",k);
        for ( l = i-1; l >= 1; l--)
            printf("%d",l);
    printf("\n");    
    }
    for (i = n-1; i>=1; i--)
    {
        for ( j = n; j>i; j--)
            printf(" ");
        for ( k = 1; k <=i; k++)
            printf("%d",k);
        for ( m = i-1; m>=1; m--)
            printf("%d",m);
    printf("\n");
    }
return 0;
}
    