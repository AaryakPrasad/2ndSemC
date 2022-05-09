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
        int n;
        printf("Enter the number of students:");
        scanf("%d",&n);
        struct student s[n];
        for (int i = 0; i < n; i++)
        {
            printf("\nEnter the name of the student:");
            scanf(" %[^\n]",s[i].name);
            printf("\nEnter the roll no.:");
            scanf("%d",&s[i].roll);
            printf("\nEnter the marks:");
            scanf("%d",&s[i].marks);
        }
    for (int i = 0; i < n; i++)
        printf("\n%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].marks);
    
    return 0;
}