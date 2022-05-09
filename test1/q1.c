#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d,p,s,y;
    printf("Enter the purchase value:");
    scanf("%d",&p);
    printf("Enter the salvage value:");
    scanf("%d",&s);
    printf("Enter years of service:");
    scanf("%d",&y);
    d=(p-s)/y;
    printf("Enter the depreciation:%d",d);
    return 0;
}