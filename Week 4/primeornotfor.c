#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n,x=0,i;
printf("Enter a number:");
scanf("%d",&n);
for (i=1; i<=sqrt(n); i++)
{
    if (n%i==0)
    {
        x+=1;
    }
}
if (x==1)
printf("Prime number.");
else
printf("Not a prime munber.");

return 0;
}
