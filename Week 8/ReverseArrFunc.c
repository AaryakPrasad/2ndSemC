#include <stdio.h>
#include <stdlib.h>
void reverse(int a[],int n)
{
    int i=0,j=n-1;
    while (i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The array now looks like:");
    for (i = 0; i < n; i++)
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
    reverse(a,n);
    return 0;
}