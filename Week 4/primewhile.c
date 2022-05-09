#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,i=2,flag=0,m;
printf("Enter a number:");
scanf("%d",&n);
m=n;
while (i<=n/2)
{
    if (n%i==0)
    {
        flag=1; 
        break;
    }
    i++;
}
if (flag==1)
    printf("%d is not a prime number\n",m);
else
    printf("%d is a prime number\n",m);
return 0;
}

