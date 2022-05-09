#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The output of %d:",n);
    while (n!=1)
    {
        if (n%2==0)
        {
            n=n/2;
            printf("\t%d",n);
        }
        else
        {
            n=(n*3)+1;
            printf("\t%d",n);
        }
    }
    return 0;
}
    
    