#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void conc(char str1[],char str2[],char str3[])
{
    for (int i = 0; i < strlen(str1); i++)
        str3[i]=str1[i];
    int j=strlen(str1);
    for (int i = 0; i < strlen(str2); i++)
    {
        str3[j]=str2[i];
        j++;
    }
    str3[j]='\0';
}
int main()
{
    int i,j,len;
    char str1[100],str2[100],str3[200];
    printf("Enter the string:");
    gets(str1);
    printf("Enter the string:");
    gets(str2);
    conc(str1,str2,str3);
    printf("\nThe combined string is:%s",str3);
    return 0;
}
    
