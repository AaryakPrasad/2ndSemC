#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,temp;
    float med;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:");
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
    
    if (n%2==0)
    {
        med=(a[(n/2)-1]+a[n/2])/2.0;
        printf("The median of the given array:%.2f",med);
    }
    else
    {
        med=a[(n/2)];
        printf("The median of the given array:%.2f",med);
    }
    return 0;
}