#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float m1,m2,m3,m4,m5,tot;
    printf("Enter the first marks:");
    scanf("%f",&m1);

    printf("Enter the second marks:");
    scanf("%f",&m2);

    printf("Enter the third marks:");
    scanf("%f",&m3);

    printf("Enter the fourth marks:");
    scanf("%f",&m4);

    printf("Enter the fifth marks:");
    scanf("%f",&m5);

    tot=(m1+m2+m3+m4+m5)/5;

    if (tot>90)
    printf("Your grade is O.");

    else if (tot>=80 && tot<90)
    {
        printf("Your grade is E.");
    }
    else if (tot>=70 && tot<80)
    {
        printf("Your grade is A.");
    }
    else if (tot>=60 && tot<70)
    {
        printf("Your grade is B.");
    }
    else if(tot>=50 && tot<60)
    {
        printf("Your grade is C.");
    }
    else if (tot>=40 && tot<50)
    {
        printf("Your grade is D.");
    }
    else
    {
        printf("You have failed.");
    }
return 0;
}