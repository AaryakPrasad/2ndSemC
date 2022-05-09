#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,ch='A';
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        for (j = i-1; j>=0; j--)
        {
            printf("%4c",ch+j);
        }
        printf("\n");
    }
return 0;
}
