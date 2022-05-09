#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2,r3;


    printf("Enter the coefficient of x2: ");
    scanf("%f", &a);

    printf("Enter the coefficient of x: ");
    scanf("%f", &b);

    printf("Enter the constant: ");
    scanf("%f", &c);

    d=(b*b-(4*a*c));
    /*printf("%f",d);*/

    if (a==0 && b==0)
    {
        printf("This isn't an equation.");
    }
    else
    {
        if (a==0 && b!=0)
        {
            r1=-b/c;
            printf("The root of this equation is: %f ",r1);
        }
        else
        {
           if (d==0)
           {
               r1=-b/(2*a);
               printf("The roots of this equation are equal and they are: %f",r1);
           }
           else
           {
               if (d>0)
               {
                    r1= -b+sqrt(d/(2*a));
                    r2= -b-sqrt(d/(2*a));
                    printf("The roots of this equation are: %f and %f",r1,r2);
               }
                else
                    {
                        r1=-b/(2*a);
                        r2=sqrt(-d)/(2*a);
                        r3=-sqrt(-d)/(2*a);
                        printf("The roots are imaginary and they are: %f +%fi and %f +%fi ",r1,r2,r1,r3);

                    }
               }

           } 
        }
    return 0;
    }
    

