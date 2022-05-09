#include <stdio.h>
#include <stdlib.h>
void input(int n, int m,int ar[][m])
{
    printf("Enter values into the matrix:");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&ar[i][j]);
        }
}

void display(int n, int m,int ar[][m])
{
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d\t",ar[i][j]);
        printf("\n");
    }
}

int main()
{
    int n,m;
    printf("Enter the number of rows of the matrices:");
    scanf("%d",&n);
    printf("Enter the number of columns of the matrices:");
    scanf("%d",&m);
    int ar[n][m];

    input (n,m,ar);
    
    display (n,m,ar);
    return 0;
}
