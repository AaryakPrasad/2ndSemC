#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,k;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=(n-i)*2; j++)
        printf(" ");
        for ( k=1; k <=i; k++)
        printf("%d",k);
        for (k=i-1; k>0; k--)
        printf("%d",k);
        printf("\n");
    }
return 0;
}
    