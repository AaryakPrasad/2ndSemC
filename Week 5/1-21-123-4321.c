#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        if ((i%2)==0)
            for (j = i; j>=1; j--)
            {
                printf("%4d",j);
            }
        else
            for (k = 1; k<=i; k++)
            {
                printf("%4d",k);
            }
    printf("\n");         
    }
return 0;      
}
    