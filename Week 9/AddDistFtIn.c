#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct InchFeet
    {
        int feet;
        int inch;
    };
    struct InchFeet d1,d2,d3;
    {
        printf("Enter the first distance in feet:");
        scanf("%d",&d1.feet);
        printf("Enter the first distance in inch:");
        scanf("%d",&d1.inch);
        printf("Enter the second distance in feet:");
        scanf("%d",&d2.feet);
        printf("Enter the second distance in inch:");
        scanf("%d",&d2.inch);
        d3.feet=d1.feet+d1.feet;
        d3.inch=d1.inch+d2.inch;
        if (d3.inch>=12)
        {
            d3.feet++;
            d3.inch=d3.inch-12;
        }
        
        printf("The added distance is:%d'%d''",d3.feet,d3.inch);
    };
}   
    