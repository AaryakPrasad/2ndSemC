#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n;
    char ch;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        ch='A';
        for (j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
return 0;
}