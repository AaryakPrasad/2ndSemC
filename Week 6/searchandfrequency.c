#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0,i,j,n;
    printf("Enter the no. of numbers you want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be searched:");
    scanf("%d",&j);
    for (i = 0; i < n; i++)
    {
        if (a[i]==j)
            c++;
    }
    if (c>0)
    {
        printf("The number is present in the array.");
        printf("\nThe frequency of number is %d.",c);
    }
    else
        printf("The number is not present in the array.");
            
return 0;
}
    
    