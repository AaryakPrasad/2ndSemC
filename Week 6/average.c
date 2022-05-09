#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=0,i,n;
    float avg;
    printf("Enter the no. of numbers you want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
        sum=sum+a[i];
    avg=sum/(n*1.0);
    printf("The average of the given numbers are:%.2f",avg);
return 0;
}