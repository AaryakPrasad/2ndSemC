#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int m,n,r,i,num=0;
printf("Enter a number:");
scanf("%d",&n);
m=n;
while (n!=0)
{
    n=n/10;
    i++;
}
n=m;
while (n!=0)
{
    r=n%10;
    num=pow(r,i)+num;
    n=n/10;
}
if (num==m)
    printf("The number is a armstrong.");
else
    printf("The number is not a armstrong.");
return 0;
}