#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter number to be modified:");
    scanf("%d",&x);
    printf("Enter modified number:");
    scanf("%d",&y);
    for (i = 0; i < n; i++)
    {
        if (a[i]==x)
            a[i]=y;
    }
    printf("The array now looks like:");
    for (i = 0; i < n; i++)
        printf("\n%d",a[i]);

    return 0;
}
    