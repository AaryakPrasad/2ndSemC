#include <stdio.h>
#include <stdlib.h>
int main()
{
double x,n,a,d=1,sum,i;
printf("Enter the value of e^x to be calculated:");
scanf("%lf",&x);
printf("Enter the degree of exactness:");
scanf("%lf",&a);
/*x=x*(3.1416/180);*/
sum=n=1;
for ( i = 1; i <=a; i++)
{
    n=n*x;
    d=d*i;
    sum=sum + (n/d);
}
printf("The value of e^ %lf is: %.8f",x,sum);
return 0;
}
