#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    while (1)
    {
        if (str[i]!='\0')
            i++;
        else
            break;
    }   

    printf("Length of string is:%d",i);
    return 0;
}