#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
printf("The array now looks like:");
    for (int i = 0; i < n; i++)
        printf("\n%d",a[i]);
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    sort(a,n);
    return 0;
}