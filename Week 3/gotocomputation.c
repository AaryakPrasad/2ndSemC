#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=1,i=0,sum=0;
    point:if (n<=100)
        if ((n%6==0) && (n%4!=0))
        {
            sum=sum+n;
            n++;
            i++;
            goto point;
        }
        else
        {
            n++;
            goto point;
        }
    
    else
    {
        printf("%d is the sum of all values less than 100 that are divisible by 6 and not divisible by 4.\n",sum);
        printf("%d is the number of such values found.",i);
    }    
return 0;
}