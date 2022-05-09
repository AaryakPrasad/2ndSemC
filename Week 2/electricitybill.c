#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float unit,bill,bill1,bill2,split1,split2;

    printf("Enter number of units consumed in the month:",unit);
    scanf("%f", &unit);
    if (unit<50)
    {
        bill=unit*3.0;
        printf("Your bill for the month is:%f",bill);
    }
    else
    {
        if (unit>50 && unit<=100)
        {
            split1=unit-50;
            bill1=150+(split1*4.50);
            printf("Your bill for the month is:%f ",bill1);
        }
        else
        {
            split2=unit-100;
            bill2=375+(split2*7);
            printf("Your bill for the month is:%f ",bill2);
        }
    }
return 0;
}