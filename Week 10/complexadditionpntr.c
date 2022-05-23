#include <stdio.h>
#include <stdlib.h>
struct complex
    {
        int real;
        int img;
    };
struct complex add(struct complex *c1, struct complex *c2)
{
    struct complex c3;
    c3.real=c1->real+c2->real;
    c3.img=c1->img+c2->img;
    return c3;
};

int main()
{
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
        c3=add(&c1,&c2);
        printf("The added complex number is:%ld+i%ld",c3.real,c3.img);

    };
}   
    