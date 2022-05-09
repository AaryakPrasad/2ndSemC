#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,len,temp;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    for (i = 0; i < (strlen(str)); i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]=(str[i]-32);
        else if ((str[i]>=65 && str[i]<=90))
            str[i]=(str[i]+32); 
        else
            continue;
    }
printf("\n%s",str);
return 0;
}