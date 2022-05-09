#include <stdio.h>
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    printf("The sum is:%d",sum(a,b));
    return 0;
}
