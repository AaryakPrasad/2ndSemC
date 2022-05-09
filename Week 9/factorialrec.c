#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The factorial is(%d!)=%d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}