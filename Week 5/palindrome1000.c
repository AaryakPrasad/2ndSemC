#include <stdio.h>
int main()
{
    int i,j,k,r,rev;
    for (i=1;i<=1000;i++)
    {
        rev=0;
        k=i;
        while (k!=0)
        {
            r=k%10;
            rev=rev*10+r;
            k=k/10;
        }
    if (i==rev)
        printf("\t%d",i);
    }
return 0;  
}