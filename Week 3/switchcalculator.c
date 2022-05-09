#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    char ch;
  
    printf("Enter an operation of +/-/*/div/modulo:\n");
    scanf("%c",&ch);
  
    printf("Enter a number:\n");
    scanf("%d",&a);

    printf("Enter another number:\n");
    scanf("%d",&b);

switch (ch)
{
case '+':
    c=a+b;
    printf("The result is: %d",c);
    break;

case '-':
    c=a-b;
    printf("The result is: %d",c);
    break;

case '*':
    c=a*b;
    printf("The result is: %d",c);
    break;

case '/':
    c=a/b;
    printf("The result is: %d",c);
    break;

case '%':
    c=a%b;
    printf("The result is: %d",c);
    break;

default:
    printf("Invalid Operator! Try again!");
    break;
}
return 0;
}