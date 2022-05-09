#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,m;
    printf("Enter the number of rows of the matrices:");
    scanf("%d",&n);
    printf("Enter the number of columns of the matrices:");
    scanf("%d",&m);

    int a[n][m],b[n][m],c[n][m];
    printf("Enter values into the first matrix:");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("Enter values into the second matrix:");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&b[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            c[i][j]=a[i][j]+b[i][j];
    
    printf("The added matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}