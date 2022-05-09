#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i,j,n=5,a[5][5];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i+j<=3)
                a[i][j]=1;
            else if (i+j==4)
                a[i][j]=0;
            else
                a[i][j]=-1;  
        }
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }    
    
    return 0;
    
}