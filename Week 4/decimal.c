#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,sum,i;
float avg;
printf("Enter the number:");
scanf("%d",&n);
for ( i = 0; i <= n; i++)
{
    printf("\t%d",i);
    sum=i+sum;
}
printf("\nThe sum of all the printed digits are:%d",sum);
printf("\nThe average is:%.2f",avg=sum/n*1.0);
return 0;
}