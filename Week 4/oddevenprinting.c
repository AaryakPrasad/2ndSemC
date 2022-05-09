#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,i,j;
printf("Enter the upper limit:");
scanf("%d",&a);
printf("Enter the lower limit:");
scanf("%d",&b);
printf("The even numbers in given range are:\n");
for (i=b; i<=a;)
{
    if ((i%2)==0)
    printf("\t%d",i);
    i=i+2;
}
printf("\nThe odd numbers in given range are:\n");
for (j=b; j<=a; j++)
{
    if ((j%2)!=0)
        printf("\t%d",j);
    else
        continue;
}
return 0;
}