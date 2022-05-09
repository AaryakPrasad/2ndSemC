#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,j,k;
for ( i = 1; i <= 1000; i++)
    {
    k=0;
    for (j=2; j<=sqrt(i); j++)
        {
        if (i%j==0)
        {
            k++;
            break;
        }
        }
    if (k==0 && j!=1)
    {
        printf("%4d",i);    
    }        
    }
return 0;
}
