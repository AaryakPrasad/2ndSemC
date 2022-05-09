#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[5];
    int i=0,j=4;
    while(i<j)
    {
        a[i]=j+1;
        a[j]=j;
        i++;j--;
    }
    printf("The array is:");
    for (i = 0; i < 4; i++)
    {
        printf("%d",a[i]);
    }
}   
    
