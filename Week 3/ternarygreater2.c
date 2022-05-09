#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);

    printf("Enter the second number:");
    scanf("%f",&b);

    (a>b)?printf("%d is greater.",a):printf("%d is greater.",b);

    return 0;
}