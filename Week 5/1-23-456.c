#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n,x=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        for (j = 0; j <i; j++)
        {
            printf("%4d",x);
            x++;
        }
    printf("\n");
    }
return 0;
}
        