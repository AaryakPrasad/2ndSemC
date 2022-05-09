#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if ((ch>='0') && (ch<='9'))
    {
        printf("%c is a digit.",ch);
    }
    else if ((ch>='A') && (ch<='Z')||(ch>='a') && (ch<='z'))
    {
        printf("%c is an alphabet.",ch);
    }
    else
        printf("%c is a special character.",ch);
return 0;
}

    