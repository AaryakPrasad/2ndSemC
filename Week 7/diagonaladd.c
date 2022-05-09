#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,ld=0,rd=0;
    printf("Enter the number of rows and columns of the matrices:");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter values into the matrix:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i==j)
                ld+=a[i][j];
            else if ((i+j)==(n-1))
                rd+=a[i][j];
        }
    printf("The matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");                               /*tbd*/
    }
    if (n%2!=0)
    {
        printf("\nThe sum of left diagonal elements:%d",ld);
        printf("\nThe sum of right diagonal elements:%d",rd+a[n-2][n-2]);
    }
    else
    {
        printf("\nThe sum of left diagonal elements:%d",ld);
        printf("\nThe sum of right diagonal elements:%d",rd);
    }
    return 0;
}