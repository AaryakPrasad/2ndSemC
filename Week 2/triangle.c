#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Enter the first side of triangle:");
    scanf("%f",&a);

    printf("Enter the second side of triangle:");
    scanf("%f",&b);

    printf("Enter the third side of triangle:");
    scanf("%f",&c);

    if (((a+b)>c) && ((b+c)>a) && ((c+a)>b))
    {
    printf("This a valid triangle.");

        if (a==b && b==c || b==c && c==a)
        printf("It is an isoceles triangle.");

        else if (a==b && b==c && c==a)
        printf("It is an equilateral triangle.");

        else
        printf("It is a scalene triangle.");
    
    }
    else
    printf("This is not a valid triangle.");

return 0;

}
