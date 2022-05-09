#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter number to inserted:");
    scanf("%d",&x);
    printf("Enter position of the number:");
    scanf("%d",&y);
    for (i = n; i >= y-1; i--)
        a[i]=a[i-1];
    a[y-1]=x;
    printf("The array now looks like:");
    for (i = 0; i < n+1; i++)
        printf("\n%d",a[i]);
    
    return 0;
}
    


    