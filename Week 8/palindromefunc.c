#include <stdio.h>
#include <stdlib.h>
void palindrome(int n)
{
int m,r,rev;
m=n;
while (n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
/*printf("Reverse of the given number is:%d\n",rev);*/
if (m==rev)
    printf("The number %d is a palindrome.\n",m);
else
    printf("The number %d is not a palindrome.\n",m);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
