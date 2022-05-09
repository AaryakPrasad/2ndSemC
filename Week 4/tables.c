#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,x,i,a=1;
printf("Enter the number:");
scanf("%d",&n);
for ( i = 1; i <= 10; i++)
{
    x=n*a;
    printf("%d x %d = %d\n",n,i,x);
    x=0;
    a=a+1;
}
return 0;
}