#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    if ((ch>='a') && (ch<='z'))
    {
        ch=ch-32;
        printf("%c is uppercase version.",ch);
    }
    else
    {
        printf("%c is not a lowercase alphabet.",ch);
    }
return 0;
}
    
    