#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,len;
    char str1[100],str2[100],str3[200];
    printf("Enter the string:");
    gets(str1);
    printf("Enter the string:");
    gets(str2);
    for (i = 0; i < strlen(str1); i++)
        str3[i]=str1[i];
    j=strlen(str1);
    for (i = 0; i < strlen(str2); i++)
    {
        str3[j]=str2[i];
        j++;
    }
    str3[j]='\0';
    printf("\nThe combined string is:%s",str3);
    return 0;
}
    
