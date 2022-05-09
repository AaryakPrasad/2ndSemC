#include <stdio.h>

int main()
{
    int a;
    float area,r,base,height,side,length,breadth;
    printf("enter 1 to find the area of the circle \nenter 2 to find the area of the rectangle \nenter 3 to find the area of triangle\n");
    printf("enter the number:");
    scanf("%d",&a);
    
    switch(a)
    
    {
    case 1:
        printf("enter the radius of the circle is: ");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("the area of the circle is %f",area);
        break;
    
    
    
    case 2:
        printf("enter length: ");
        scanf("%f",&length);
        printf("enter breadth:");
        scanf("%f",&breadth);
        area=length*breadth;
        printf("the area of the recatabngle is %f:",area);
        break;

    
    
    case 3:
        printf("enter the base: ");
        scanf("%f",&base);
        printf("enter the height: ");
        scanf("%f",&height);
        area=0.5*base*height;
        printf("the area of the triangle is %f: ",area);
        break;
default:
    printf("Invalid option! Try again!");
    break;        
    }
return 0;
}