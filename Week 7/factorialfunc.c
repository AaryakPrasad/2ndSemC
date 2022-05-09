#include <stdio.h>
int factorial(int n)
{
    int x=1;
    for (int i = 1; i <= n; i++)
        x=x*i;
    return x;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The factorial of this number is:%d",factorial(n));
    return 0;
}