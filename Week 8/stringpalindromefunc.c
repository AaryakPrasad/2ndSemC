#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrome(char str1[],char str2[])
{
    int len=strlen(str1);
    int j=0;
    for (int i = len-1; i >=0; i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
}
int main()
{
    char str1[100],str2[100];
    printf("Enter the string:");
    scanf("%[^\n]",str1);
    palindrome(str1,str2);
    if (strcmp(str1,str2)==0)
        printf("\nThe string is a palindrome.");
    else
        printf("\nNot a palindrome.");

    return 0;
}