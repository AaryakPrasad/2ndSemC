#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,n;
    float temp,sum=0,mean,var=0,sd;
    float med;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
    {
        sum+=a[i];
        mean=sum/n;
    }
    for (i = 0; i < n; i++)
        var+=pow((a[i]-mean),2);
    sd=sqrt(var/n);
    printf("The standard deviation of given data is:%f",sd);
    return 0;
}
    
    