#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    