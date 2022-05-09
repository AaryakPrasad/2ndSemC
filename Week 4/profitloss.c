#include <stdlib.h>
#include <stdio.h>
int main()
{
    float cp,sp,p,l;

    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    if (sp>cp)
        printf("The profit is Rs.%.2f",(sp-cp));
    else if (cp>sp)
        printf("The loss is %.2f",(cp-sp));
    else
        printf("There is no net profit or loss.");
    
return 0;
}