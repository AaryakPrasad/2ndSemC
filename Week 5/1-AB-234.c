#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l,x=1,n,z=0;
    char ch='A';
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i =1 ; i <=n; i++)
    {
        for ( j = 1; j <= n-i; j++)
            printf(" ");
        if (i%2==0)
        {
            for ( k = 0; k < i; k++)
            {
                printf("%2c",ch+z);
                z++;
            }
        }
        else
            for ( l = 0; l < i; l++)
            {
                printf("%2d",x);
                x++;
            }
        printf("\n");        
        }
return 0;
}        
        
        