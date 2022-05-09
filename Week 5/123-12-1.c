#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n,x=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = n; i>=1; i--)
    {
        for ( j = 1; j <= i; j++)
            printf("%d",j);
    printf("\n");
    }
    return 0;
}