#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct cricket
    {
        char player_name[20];
        char team_name[20];
        int batting_avg;   
    };
        struct cricket b[5];
        for (int i = 0; i < 5; i++)
        {
            printf("\nEnter the name of the player:");
            scanf(" %[^\n]",&b[i].player_name);
            printf("\nEnter the name of the team:");
            scanf(" %[^\n]",&b[i].team_name);
            printf("\nEnter the batting average:");
            scanf("%d",&b[i].batting_avg);
        }
        printf("The players whose batting average is greater than 70 are:");
        for (int i = 0; i < 5; i++)
            if (b[i].batting_avg>=70)
                printf("\n%s",b[i].player_name);
    return 0;      
}        
        