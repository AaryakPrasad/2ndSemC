#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,i,n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The array now looks like:");
    for (i = 0; i < n; i++)
        printf("\n%d",a[i]);
    
    return 0;
}