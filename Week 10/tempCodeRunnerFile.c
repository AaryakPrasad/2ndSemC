#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,c,n,m;
int a[4][4];
    printf("Enter values into the matrix:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
        {
            if (a[i][j] == 0 || a[i][j] == 1)
                c++;

            for (i = 2; i <= n / 2; ++i)
                if (a[i][j] % i == 0) 
                    c++;
        }
printf("Number of prime numbers are:%d",c);
return 0;
}
