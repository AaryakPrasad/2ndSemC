#include <stdio.h>
#include <stdlib.h>
int length(char *str)
{
    char *ptr;
    int i=0;
    ptr=str;
    while (*ptr!='\0')
    {
        i++;
        ptr++;
    }
    return i;
}
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    printf("Length of the string is:%d",length(str));
}
