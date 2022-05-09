#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m1,m2,m3,m4,m5,tot;
    printf("Enter the first marks:");
    scanf("%d",&m1);

    printf("Enter the second marks:");
    scanf("%d",&m2);

    printf("Enter the third marks:");
    scanf("%d",&m3);

    printf("Enter the fourth marks:");
    scanf("%d",&m4);

    printf("Enter the fifth marks:");
    scanf("%d",&m5);

    tot=(m1+m2+m3+m4+m5)/50;

    switch (tot)
    {
    case 10:
    case 9:
        printf("Your grade is O.");
        break;
    case 8:
        printf("Your grade is E.");
        break;
    case 7:
        printf("Your grade is A.");
        break;
    case 6:
        printf("Your grade is B.");
        break;
    case 5:
        printf("Your grade is C.");
        break;
    case 4:
        printf("Your grade is D.");
        break;
    default:printf("You have failed.");
        break;
    }
}
