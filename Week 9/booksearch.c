#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[20];
        char Author[20];
        int price;
        char publisher[20];
        int edition;
    };
    int n,x=0;
    printf("Enter the number of books:");
    scanf("%d",&n);
    struct book b[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the book:");
        scanf(" %[^\n]",b[i].name);
        printf("\nEnter the author:");
        scanf("%[^\n]",&b[i].Author);
        printf("\nEnter the price:");
        scanf("%d",&b[i].price);
        printf("\nEnter the publisher:");
        scanf(" %[^\n]",b[i].publisher);
        printf("\nEnter the edition:");
        scanf("%d",&b[i].edition);   
    }
    char search[20];
    printf("Enter the book to be searched:");
    scanf(" %[^\n]",search);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(search,b[i].name)==0)
            x=b[i].edition;
    }
    if (x>0)
        printf("The book is present and its serial number is %d.",x);
    else
        printf("The book is not present.");
    return 0;
}

    
    
    

    
    