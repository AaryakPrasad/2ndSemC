#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    char c;
  
    printf("Enter an operation of +/-/*/div/modulo:");
    scanf("%c",&c);
  
    printf("Enter a number:");
    scanf("%d",&a);

    printf("Enter another number:");
    scanf("%d",&b);
    
    if (c=='+')
    {
        c=a+b;
        printf("The result is: %d",c);

    }
    else if (c=='-')
    {
        c=a-b;
        printf("The result is: %d",c);
    }
    else if (c=='*')
    {
        c=a*b;
        printf("The result is: %d",c);
    }
    else if (c=='/')
    {
        c=a/b;
        printf("The result is: %d",c);
    }
    else if (c=='%')
    {
        c=a%b;
        printf("The result is: %d",c);
    }
    else 

        printf("Invalid Operator, try again.");
    
    return 0;

}