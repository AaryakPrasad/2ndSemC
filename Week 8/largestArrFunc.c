#include <stdio.h>
#include <stdlib.h>
int largest(int ar[])
{
    int tempnum=ar[0],n;
    for (int i = 1; i < n; i++)
    {
        if (ar[i]>tempnum)
            tempnum=ar[i];  
    }
    return tempnum;
}

int main()
{
    int i,n,x;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    x=largest(a);
    printf("\nThe greatest number is %d",x);
    return 0;
}