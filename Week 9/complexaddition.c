#include <stdio.h>
#include <stdlib.h>
struct complex
    {
        float real;
        float img;
    };
struct complex add(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
int main()
{
    struct complex c1,c2,result;
    {
        printf("Enter the first real number:");
        scanf("%f",&c1.real);
        printf("Enter the first imaginary number:");
        scanf("%f",&c1.img);
        printf("Enter the second real number:");
        scanf("%f",&c2.real);
        printf("Enter the second imaginary number:");
        scanf("%f",&c2.img);
        result=add(c1,c2);
        printf("The added complex number is:%.2f+i%.2f",result.real,result.img);
        return 0;
    }
}   
    