#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct complex
    {
        int real;
        int img;
    };
    struct complex c1,c2,c3;
    {
        printf("Enter the first real number:");
        scanf("%d",&c1.real);
        printf("Enter the first imaginary number:");
        scanf("%d",&c1.img);
        printf("Enter the second real number:");
        scanf("%d",&c2.real);
        printf("Enter the second imaginary number:");
        scanf("%d",&c2.img);
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        printf("The added complex number is:%d+i%d",c3.real,c3.img);
    };
}   
    