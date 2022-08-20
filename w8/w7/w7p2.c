/*
*****************************************************************************
                          Workshop - #7 (P1)
Full Name  : NOUR BADIRI
Student ID#: 108435215
Email      : nbadiri@myseneca.ca 
Section    : NNN

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#include <stdio.h>
#define max_lives 10
#define max_moves 15
struct PlayerInfo
{
    int lives, treasureFound, nextMove;
    char symbol, history[70];
};

struct GameInfo
{
    int maxMoves, pathLength, bombs[70], treasure[70];
};

int main(void)
{
    int i, j, moreinput = 0, temp;
    struct PlayerInfo player;
    struct GameInfo game;

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");

    // Configure Player Info
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.symbol);
    do
    {
        printf("Set the number of lives: ");
        scanf("%d", &player.lives);

        if (1 <= player.lives && player.lives <= max_lives)
        {
            moreinput = 1;
        }
        else
        {
            printf("     Must be between 1 and %d!\n", max_lives);
        }
    } while (moreinput == 0);
    for (i = 0; i < 70; i++)
    {
        player.history[i] = '-';
    }
    if (moreinput == 1)
    {
        printf("Player configuration set-up is complete\n\n");
        moreinput = 0;
    }

    // Configure Game Info
    printf("GAME Configuration\n");
    printf("------------------\n");
    do
    {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d", &game.pathLength);

        if (game.pathLength % 5 == 0 && 10 <= game.pathLength && game.pathLength <= 70)
        {
            do
            {
                printf("Set the limit for number of moves allowed: ");
                scanf("%d", &game.maxMoves);
                if (3 <= game.maxMoves && game.maxMoves <= max_moves)
                {
                    moreinput = 1;
                }
                else
                {
                    printf("    Value must be between 3 and %2d\n",max_moves);
                }
            } while (moreinput == 0);
        }
        else
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    } while (moreinput == 0);
    moreinput = 0;

    // Bomb Placement
    printf("\n");
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);
    for (i = 0; i < game.pathLength; i = i + 5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 1 + 4);
        for (j = i; j <= i + 4; j++)
        {
            scanf("%d", &game.bombs[j]);
        }
    }
    printf("BOMB placement set\n");

    // TREASURE Placement
    printf("\n");
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);
    for (i = 0; i < game.pathLength; i = i + 5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 1 + 4);
        for (j = i; j <= i + 4; j++)
        {
            scanf("%d", &game.treasure[j]);
        }
    }
    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");

    // Treasure Hunt Configuration Settings
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.symbol);
    printf("   Lives      : %d\n", player.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n");
    printf("\n");
    printf("Game:\n");
    printf("   Path Length: %d\n", game.pathLength);
    printf("   Bombs      : ");
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%d", game.bombs[i]);
    }
    printf("\n");
    printf("   Treasure   : ");
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%d", game.treasure[i]);
    }
    printf("\n");
    printf("\n");
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");

    player.nextMove = 0;
    player.treasureFound = 0;
    do
    {
        if (player.nextMove != 0)
        {
            printf("  ");
            for (i = 0; i < player.nextMove-1; i++)
            {
                printf(" ");
            }
            printf("%c", player.symbol);
        }
        printf("\n  ");
        for (i = 0; i < game.pathLength; i++)
        {
            printf("%c", player.history[i]);
        }
        printf("\n  ");
        for (i = 1; i <= game.pathLength; i++)
        {
            if (i % 10 == 0)
            {
                printf("%d", (i / 10));
            }
            else
            {
                printf("|");
            }
        }
        printf("\n  ");
        for (i = 1; i <= game.pathLength; i++)
        {
            if (i % 10 == 0)
            {
                printf("0");
            }
            else
            {
                if (i < 10)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("%d", (i % 10));
                }
            }
        }
        printf("\n");
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", 
               player.lives, player.treasureFound, game.maxMoves);
        printf("+---------------------------------------------------+\n");

        temp = 0;
        do
        {
            printf("Next Move [1-%2d]: ", game.pathLength);
            scanf("%d", &player.nextMove);
            if (1 <= player.nextMove && player.nextMove <= game.pathLength)
            {
                temp = 1;
            }
            else
            {
                printf("  Out of Range!!!\n");
            }
        } while (temp == 0);

        if (player.history[player.nextMove - 1] == '.')
        {
            printf("\n===============> Dope! You've been here before!\n");
        }
        else
        {
            game.maxMoves--;
            if (game.bombs[player.nextMove - 1] == 1 && game.treasure[player.nextMove - 1] == 1)
            {
                player.lives--;
                player.treasureFound++;
                player.history[player.nextMove - 1] = '&';
                printf("\n===============> [&] !!! BOOOOOM !!! [&]\n");
                printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n");  
            }
            else if (game.bombs[player.nextMove - 1] == 1)
            {
                player.lives--;
                player.history[player.nextMove - 1] = '!';
                printf("\n===============> [!] !!! BOOOOOM !!! [!]\n");
            }
            else if (game.treasure[player.nextMove - 1] == 1)
            {
                player.treasureFound++;
                player.history[player.nextMove - 1] = '$';
                printf("\n===============> [$] $$$ Found Treasure! $$$ [$]\n");
            }
            else
            {
                player.history[player.nextMove - 1] = '.';
                printf("\n===============> [.] ...Nothing found here... [.]\n");
            }
        }
        printf("\n");

        if (player.lives == 0)
        {
            printf("No more LIVES remaining!\n");
            moreinput = 1;
        }
        else if (game.maxMoves == 0)
        {
            printf("No more MOVES remaining!\n");
            moreinput = 1;
        }
    } while (moreinput == 0);

    printf("\n");

    if (player.nextMove != 0)
    {
        printf("  ");
        for (i = 0; i < player.nextMove-1; i++)
        {
            printf(" ");
        }
        printf("%c", player.symbol);
    }
    printf("\n  ");
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%c", player.history[i]);
    }
    printf("\n  ");
    for (i = 1; i <= game.pathLength; i++)
    {
        if (i % 10 == 0)
        {
            printf("%d", (i / 10));
        }
        else
        {
            printf("|");
        }
    }
    printf("\n  ");
    for (i = 1; i <= game.pathLength; i++)
    {
        if (i % 10 == 0)
        {
            printf("0");
        }
        else
        {
            if (i < 10)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", (i % 10));
            }
        }
    }
    printf("\n");
    printf("+---------------------------------------------------+\n");
    printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", 
           player.lives, player.treasureFound, game.maxMoves);
    printf("+---------------------------------------------------+\n");
    printf("\n");
    printf("##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n\n");

    printf("You should play again and try to beat your score!\n\n");

    return 0;
}
