#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Conv
    {
        int km;
        int m;
    };
    struct Conv d1,d2,d3;
    {
        printf("Enter the first distance in kilometer:");
        scanf("%d",&d1.km);
        printf("Enter the first distance in meter:");
        scanf("%d",&d1.m);
        printf("Enter the second distance in kilometer:");
        scanf("%d",&d2.km);
        printf("Enter the second distance in meter:");
        scanf("%d",&d2.m);
        d3.km=d1.km+d2.km;
        d3.m=d1.m+d2.m;
        if (d3.m>=1000)
        {
            d3.km++;
            d3.m=d3.m-1000;
        }
        
        printf("The added distance is:%d km %d m",d3.km,d3.m);
    };
}   
    