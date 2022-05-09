#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,k,ch;
    printf("Enter number of rows:");
    scanf("%d",&n);
    ch='A';
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=(n-i); j++)
        printf(" ");
        for ( k=1; k <=i; k++)
        {
        printf("%c",ch);
        ch=ch+1;
        ch='A';
        }
        ch='@';
        for (k=i+1; k>0; k--)
        {
        ch=ch+1;
        }
        printf("%c",ch);
        printf("\n");
    }
return 0;
}
    