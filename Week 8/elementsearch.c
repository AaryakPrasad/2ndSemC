#include <stdio.h>
#include <stdlib.h>
int Lsearch(int arr[],int n, int s)
{
    for (int i = 0; i < n; i++)
        if (arr[i]==s)
            return i;
        return -1;
}
int main()
{
    int i,s,n,c;
    printf("Enter the no. of numbers you want to enter:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to be searched:");
    scanf("%d",&s);
    c=Lsearch(arr,n,s);
    if (c!=-1)
        printf("The number is present and is at location %d.",c+1);
    else
        printf("The number is not present in the array.");
    return 0;
}