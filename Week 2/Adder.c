#include <stdio.h>
int main()
{
    int a,b,r;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    r=a+b;

    printf("%d + %d = %d", a, b, r);
    return 0;
}