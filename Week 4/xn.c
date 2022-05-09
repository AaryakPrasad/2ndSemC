#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,x,i,prod=1;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the exponent:");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
    prod=prod*x;
}
printf("The value of the given equation is:%d",prod);
return 0;
}