#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Enter the first number:");
    scanf("%f",&a);

    printf("Enter the second number:");
    scanf("%f",&b);

    printf("Enter the third number:");
    scanf("%f",&c);

    (a>b)?(a>c)?printf("%f is the largest",a):printf("%f is the largest",c):(b>c)?printf("%f is the largest",b):printf("%f is the largest",c);
    return 0;
}