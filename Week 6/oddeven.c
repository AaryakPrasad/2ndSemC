#include <stdio.h>
#include <stdlib.h>
int main()
{
    int oddnum,oddsum,evennum,evensum,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            evennum++;  
            evensum=evensum+a[i]; 
            
        }
        else
        {
            oddnum++;
            oddsum=oddsum+a[i];
        }
    }
    printf("\nThe number of odd numbers are:%d",oddnum);
    printf("\nThe number of even numbers are:%d",evennum);
    printf("\nThe sum of odd numbers are:%d",oddsum);
    printf("\nThe sum of even numbers are:%d",evensum);
    return 0;
}
    