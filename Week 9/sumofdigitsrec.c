#include <stdio.h>
#include <stdlib.h>
int sumdigit(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The sum of its digits is:%d",sumdigit(n));
    return 0;
}
int sumdigit(int n)
{
    if (n==0)
        return 0;
    else
    {
        int a=n%10;
        return a+sumdigit(n/10);
    }
}