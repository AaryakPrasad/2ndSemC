#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    (n%2==0)?printf("%d is an even number",n):printf("%d is an odd number",n);
return 0;
}
