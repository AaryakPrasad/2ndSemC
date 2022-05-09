#include <stdio.h>
#include <stdlib.h>
void inputArr(int n, int m,int ar[][m])
{
    printf("Enter values into the matrix:");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("\nEnter a [%d][%d] element:",i,j);
            scanf("%d",&ar[i][j]);
        }
}

void displayArr(int n, int m,int ar[][m])
{
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d\t",ar[i][j]);
        printf("\n");
    }
}

void multiplicationArr(int m,int n,int o,int p,int a[][n],int b[][p],int c[m][p])
{
    for (int i = 0; i < m; i++)
            for (int j = 0; j < p; j++)
            {
                int sum=0;
                for (int k = 0; k < n; k++)
                    sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
}
int main()
{
    int m,n,o,p;
    printf("Enter the number of rows of the first matrix:");
    scanf("%d",&m);
    printf("Enter the number of columns of the first matrix:");
    scanf("%d",&n);
    printf("Enter the number of rows of the second matrix:");
    scanf("%d",&o);
    printf("Enter the number of columns of the second matrix:");
    scanf("%d",&p);
    int a[m][n],b[o][p],c[m][p];
    if (n!=o)
        printf("Multiplication is not possible.");
    else
    {
        inputArr(m,n,a);
        inputArr(o,p,b);
        displayArr(m,n,a);
        displayArr(o,p,b);
        multiplicationArr(m,n,o,p,a,b,c);
        displayArr(n,m,c);
    }
return 0;
}