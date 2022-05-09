#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void prime(int n)
{
int i,x=0;
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
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}
