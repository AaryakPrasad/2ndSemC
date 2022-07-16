#include <stdio.h>
#include <stdlib.h>

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};

void grid_display()
{
    
    printf("\n\tTic Tac Toe(Naughts and Crosses)\n");

    printf("\nInstructions: Player 1 is (O)  -  Player 2 is (X)\n");


    printf("\n\n     |     |     \n");
    printf("  %c  |  %c  |  %c \n", grid[1], grid[2], grid[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", grid[4], grid[5], grid[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", grid[7], grid[8], grid[9]);

    printf("     |     |     \n\n");
}

int test_success()
{
    if (grid[1] == grid[2] && grid[2] == grid[3])
        return 1;
        
    else if (grid[4] == grid[5] && grid[5] == grid[6])
        return 1;
        
    else if (grid[7] == grid[8] && grid[8] == grid[9])
        return 1;
        
    else if (grid[1] == grid[4] && grid[4] == grid[7])
        return 1;
        
    else if (grid[2] == grid[5] && grid[5] == grid[8])
        return 1;
        
    else if (grid[3] == grid[6] && grid[6] == grid[9])
        return 1;
        
    else if (grid[1] == grid[5] && grid[5] == grid[9])
        return 1;
        
    else if (grid[3] == grid[5] && grid[5] == grid[7])
        return 1;
        
    else if (grid[1] !='1' && grid[2] !='2' && grid[3] !='3' &&
        grid[4] !='4' && grid[5] !='5' && grid[6] !='6' && grid[7] 
        !='7' && grid[8] !='8' && grid[9] !='9')

        return 0;
    else
        return  - 1;
}

int main()
{
    int player=1, win, choice;
    char symb;
    
    do
    {
        grid_display();
        
        if (player%2)
            player = 1;
        else
            player = 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        
        if (player == 1)
            symb = 'O';
        else
            symb = 'X';

        if (choice == 1 && grid[1] =='1')
            grid[1] = symb;
            
        else if (choice == 2 && grid[2] =='2')
            grid[2] = symb;
            
        else if (choice == 3 && grid[3] =='3')
            grid[3] = symb;
            
        else if (choice == 4 && grid[4] =='4')
            grid[4] = symb;
            
        else if (choice == 5 && grid[5] =='5')
            grid[5] = symb;
            
        else if (choice == 6 && grid[6] =='6')
            grid[6] = symb;
            
        else if (choice == 7 && grid[7] =='7')
            grid[7] = symb;
            
        else if (choice == 8 && grid[8] =='8')
            grid[8] = symb;
            
        else if (choice == 9 && grid[9] =='9')
            grid[9] = symb;
            
        else
        {
            printf("Invalid move ");

            player--;
            
        }
        win = test_success();

        player++;

    }   while (win == -1);
    
    grid_display();
    
    if (win == 1)
        printf("Player %d wins! ", --player);
    else
        printf("Game is a draw!");

    return 0;
}





