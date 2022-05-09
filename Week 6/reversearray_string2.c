#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,len,temp;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    len=strlen(str);                         /*Doesnt always work in VS code run in OnlineGDB*/
    j=len-1;
    while (i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
printf("\n%s",str);
return 0;
}    