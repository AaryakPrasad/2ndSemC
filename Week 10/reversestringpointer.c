#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char *str[20],int n)
{
    char *ptr;
    ptr=str;
    int j=1;
    for (int i = n-1; i >=0; i--)
    {
        ptr[j]=str[i];
        j++;
    }
    printf("%s",&ptr);
}
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    reverse(&str,strlen(str));
}