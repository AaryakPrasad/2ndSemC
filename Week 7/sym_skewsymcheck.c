#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,m,k=0,t=0;
    printf("Enter the number of rows of the matrices:");
    scanf("%d",&n);
    printf("Enter the number of columns of the matrices:");
    scanf("%d",&m);

    int a[n][m],b[n][m],c[n][m];
    printf("Enter values into the matrix:");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            b[i][j]=a[j][i];
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            c[i][j]=(-a[j][i]);
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (a[i][j]==b[i][j])
                k++;
            else
                break;   
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (a[i][j]==c[i][j])
                t++;
            else
                break;   
        }

    if (k==(n*m))
    {
        printf("The matrix is symmetric.\n");
        printf("The symmetric matrix is:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%d\t",b[i][j]);
            printf("\n");
        }
    }
    else if (t==(n*m))
    {
        printf("The matrix is symmetric.\n");
        printf("The skew-symmetric matrix is:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("The matrix is neither symmetric nor skew symmetric");
    
    return 0;
}
