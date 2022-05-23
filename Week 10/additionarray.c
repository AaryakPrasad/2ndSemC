#include <stdio.h>
#include <stdlib.h>
int sum_arr(int *a[],int n)
{
    int sum=0,*p;
    int i = 0;
    p=a;
    while (i < n)
    {
        sum+=*p;
        i++;p++;        
    }
    return sum;
}
int main()
{
    int n,res;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values into the array:");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    res=sum_arr(&a,n);
    printf("The sum of all the numbers in the array is:%d",res);
    return 0;   
}