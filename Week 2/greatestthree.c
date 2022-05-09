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

    if (a>b)
    {
        if (a>c)
        {
            printf("%f is the greatest out of the three.",a);
        }
        else
        {
            printf("%f is the greatest out of the three.",c);
        }
        
    }
    else
    {
        if (b>c)
        {
            printf("%f is the greatest out of the three.",b);
        }
        else
        {
            printf("%f is the greatest out of the three.",c);
        }
    }
return 0;
}