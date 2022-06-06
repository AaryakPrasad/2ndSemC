#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
        int marks;   
    };
        struct student s;
        printf("\nEnter the name of the student:");
        scanf("%[^\n]",s.name);
        printf("\nEnter the roll no.:");
        scanf("%d",&s.roll);                                                                                                                   printf("\nEnter the marks:");
        scanf("%d",&s.marks);
    printf("%d\t%s\t%d",s.roll,s.name,s.marks);
    return 0;
}