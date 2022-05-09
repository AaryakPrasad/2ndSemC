#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float salary,tax;

    printf("Enter the annual salary:", salary);
    scanf("%f",&salary);
    if (salary<150000)
    {
        printf("You dont have any taxes to pay.");
    }
    else
    {
        if (salary>150000 && salary<300000)
        {
            tax=0.1*salary;
            printf("Your tax is: %f", tax);
        }
        else
        {
            if (salary>300000 && salary<500000)
            {
                tax=0.2*salary;
                printf("Your tax is: %f", tax);
            }
            else
            {
                tax=0.3*salary;
                printf("Your tax is: %f", tax);

            }
        }
        
    }
    
}