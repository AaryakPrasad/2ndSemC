#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if ((ch>='A') && (ch<='Z')||(ch>='a') && (ch<='z'))
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("The entered character is a vowel.");
        }
        else
        {
            printf("The entered character is a consonant.");
        }
    else
    {
        printf("Entered character is not an alphabet");
    }
    return 0;
}