#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int op;
    float r,a,b,c,s,ar;
    printf("1. To calculate the area of a circle.\n2. To calculate the area of a triangle.\n3. To calculate the area of a rectangle.\nEnter your choice:");
    scanf("%d",&op);

switch (op)
{
case 1:
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    ar = 3.14*r*r;
    printf("Area of the circle is:%.2f",ar);
    break;

case 2:
    printf("Enter the first side of triangle:");
    scanf("%f",&a);

    printf("Enter the second side of triangle:");
    scanf("%f",&b);

    printf("Enter the third side of triangle:");
    scanf("%f",&c);

    s=(a+b+c)/2;
    ar=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("Area of the triangle is:%.2f",ar);
    break;

case 3:
    printf("Enter the length of rectangle:");
    scanf("%f",&a);

    printf("Enter the breadth of rectangle:");
    scanf("%f",&b);
    ar=a*b;
    printf("Area of the rectangle is:%.2f",ar);

    break;

default:
    printf("Invalid option! Try again!");
    break;
}
return 0;
}