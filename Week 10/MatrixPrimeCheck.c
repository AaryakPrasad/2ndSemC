#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,c=0,k;
int a[4][4];
    printf("Enter values into the matrix:");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
for (i = 0; i < 4; i++)
    for (j = 0; j < 4; j++)
        {
            if (a[i][j] == 0 || a[i][j] == 1)
                c++;

            for (k = 2; k <= a[i][j]/2;k++)
                if (a[i][j] % k != 0) 
                    c++;
                    break;
        }
printf("Number of prime numbers are:%d",c);
return 0;
}
