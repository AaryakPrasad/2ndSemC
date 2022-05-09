#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=1,x,sum=0;
while (x!=0)
{
    printf("Enter number to be added:");
    scanf("%d",&x);
    sum=sum+x;
}
printf("The sum of all digits:%d",sum);
return 0;
}
