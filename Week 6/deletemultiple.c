#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,n,m;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[2*n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter number of elements to be deleted:");
    scanf("%d",&m);
    for (int j = 1; j < m+1; j++)
    {
        printf("Enter position of number to be deleted:");
        scanf("%d",&y);
        for (int k = y-1; k < n; k++)
            a[k]=a[k+1];
    }
    printf("The array now looks like:");
    for (int i = 0; i < n-m; i++)
        printf("\t%d",a[i]);
    return 0;
}
    
    