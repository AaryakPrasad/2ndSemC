#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,m,r,sum=0;
int rev=0;
printf("Enter a number:");
scanf("%d",&n);
m=n;
while (n!=0)
{
    n=n/10;
    i++;
}
printf("Number of digits in the given number is:%d\n",i);

n=m;

while (n!=0)
{
    r=n%10;
    sum+=r;
    n=n/10;
}
printf("Sum of digits of the given number:%d\n",sum);

n=m;
while (n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("Reverse of the given number is:%d\n",rev);
if (m==rev)
{
    printf("The number %d is a palindrome.\n",m);
}
else
    printf("The number %d is not a palindrome.\n",m);
return 0;
}