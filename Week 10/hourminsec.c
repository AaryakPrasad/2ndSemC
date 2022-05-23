#include <stdio.h>
#include <stdlib.h>
struct time
    {
        int hour;
        int min;
        int sec;
    };
struct time conv(struct time t1, struct time t2)
{
    struct time t3;
    t3.hour=t1.hour+t1.hour;
    t3.min=t1.min+t2.min;
    t3.sec=t1.sec+t2.sec;
    if (t3.sec>=60)
    {
        t3.min++;
        t3.sec=t3.sec-60;
    }
    if (t3.min>=60)
    {
        t3.hour++;
        t3.min=t3.min-60;
    }
    return t3;
}
int main()
{
    struct time d1,d2,d3;
    {
        printf("Enter time 1 in hours:");
        scanf("%d",&d1.hour);
        printf("Enter time 1 in min:");
        scanf("%d",&d1.min);
        printf("Enter time 1 in secs:");
        scanf("%d",&d1.sec);
        printf("Enter time 2 in hours:");
        scanf("%d",&d2.hour);
        printf("Enter time 2 in min:");
        scanf("%d",&d2.min);
        printf("Enter time 2 in secs:");
        scanf("%d",&d2.sec);
        d3=conv(d1,d2);
        printf("The added time is:%d:%d:%d",d3.hour,d3.min,d3.sec);
    };
}   
    