#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,sal;
    printf("Enter number of products sold:");
    scanf("%f",&x);
    !(x<40)?(x>40)?printf("Salary of salesman is %.2f",4.5*x+150):printf("Salary of salesman is 300"):!(x>40)?printf("Salary of salesman is %.2f",4*x+100):printf("Salary of salesman is 300");
return 0;
}