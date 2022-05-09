#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The array now looks like:");
    for (i = 0; i < n; i++)
        printf("\n%d",a[i]);
    
    printf("\nThe second largest number is %d",a[n-2]);
    
    printf("\nThe smallest is %d and greatest is %d",a[1],a[n-1]);
    
    return 0;
}
    