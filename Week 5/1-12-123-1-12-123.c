#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
            printf("%d",j);
        for ( k = j; j<=n; j++)
            printf(" ");
        for ( j = 1; j <=i; j++)
            printf("%d",j);
        
        printf("\n");
    }
return 0;
}
    
