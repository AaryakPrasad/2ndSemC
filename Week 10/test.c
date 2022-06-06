#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter word : ");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        if(i==0||i==1)
        {
            int l1=l;
            while(l1>2*i)
            {
                str[l1]=str[l1-1];
                l1--;
            }
            l++;
            str[l]='\0';
            str[i+i+1]=' ';
        }
    }
    printf("%s",str);
    return 0;
}