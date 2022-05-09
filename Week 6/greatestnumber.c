#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    int tempnum=a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i]>tempnum)
            tempnum=a[i];  
    }
    printf("\nThe greatest number is %d",tempnum);

    return 0;
}
