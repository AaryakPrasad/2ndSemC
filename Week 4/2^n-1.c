#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,x=1,i,j;
printf("Enter the number:");
scanf("%d",&n);
for ( i = 0; i <= n; i++)
{
    x=2*(pow(2,i))-1;
    printf("\t%d",x);
}
return 0;
}
/* Try using loop instead of pow() */