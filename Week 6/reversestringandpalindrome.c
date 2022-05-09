#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,len;
    char str1[100],str2[100];
    printf("Enter the string:");
    scanf("%[^\n]",str1);
    len=strlen(str1);                         /*Doesnt always work in VS code run in OnlineGDB*/
    j=0;
    for (i = len-1; i >=0; i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("\n%s",str2);

    if (strcmp(str1,str2)==0)
        printf("\nThe string is a palindrome.");
    else
        printf("\nNot a palindrome.");

    return 0;
}
    