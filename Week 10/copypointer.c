#include<stdio.h>
void copy(char *a, char *b)
{
    while(*a!='\0')
    {
         *b=*a;
         a++;
         b++;
    }
    *b='\0';
    
}
int main()
{
    char a[100], b[100];
    printf("Enter String : ");
    scanf("%[^\n]",a);
    copy(a,b);
    printf("The copied string : %s",b);
    return 0;
}