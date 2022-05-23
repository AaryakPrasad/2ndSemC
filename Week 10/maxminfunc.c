#include <stdio.h>
#include <stdlib.h>
void max_min(int a[],int n, int *max, int *min)
{
    int i,j,temp;
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
    *max=a[n-1];
    *min=a[0];
}

int main()
{
    int n,max,min;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    max_min(a,n,&max,&min);
    printf("The max value in the array is %d and min value is %d.",max, min);
    return 0;
}