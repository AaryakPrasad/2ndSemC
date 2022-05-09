#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m,n,x;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {   
        x=i;
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (k=1; k <= i; k++)
        {
            printf("%d",x);
            x++;
        }
        x=x-2;
        for (m=1; m<i; m++)
        {
            printf("%d",x);
            x=x-1;
        }
    printf("\n");;
    }
return 0;
}  
        