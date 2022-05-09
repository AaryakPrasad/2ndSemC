#include <stdio.h>
#include <stdlib.h>
int sumdigits(int n)
{
    int r,sum;
    while (n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The sum of the digits of the number is:%d",sumdigits(n));
    return 0;
}