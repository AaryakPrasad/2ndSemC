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
        if((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                str[i]='k';
        }
    }
    printf("\n%s",str);
return 0;
}
    