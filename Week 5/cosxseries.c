#include <stdio.h>
#include <stdlib.h>
int main()
{
float x,a,n,d=1,sum,i;
printf("Enter the value of cos to be calculated:");
scanf("%f",&x);
printf("Enter the degree of exactness:");
scanf("%f",&a);
x=x*(3.1416/180);
sum=n=1;
for ( i = 1; i <=a; i++)
{
    n=n*x*x*(-1);
    d=d*(2*i)*((2*i)-1);
    sum=sum + (n/d);
}
printf("The value of cos %f in radians is: %.9f",x,sum);
return 0;
}
