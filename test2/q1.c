#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void prime (int x,int y)
{
    int i,j,k;
    printf("The prime numbers between %d and %d are:",x,y);
    for (i = x; i <= y; i++)
    {
        k=0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if ((i%j)==0)
            {
                k++;
                break;
            }
        }
        if (k==0)
            printf("\t%d",i);
    }
}

int main()
{
    int x,y;
    printf("Enter the upper limit:");
    scanf("%d",&y);
    printf("Enter the lower limit:");
    scanf("%d",&x);
    prime(x,y);
}