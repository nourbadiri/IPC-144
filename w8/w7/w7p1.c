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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_PATH_LEN 70
#define MIN_PATH_LEN 10
#define MAX_LIVES 10
#define MIN_LIVES 1
#define max_moves 26
#define MULTIPLE 5

struct PlayerInfo{
    int lives;
    int treasures; 
    int nextMove;
    char symbol;
    char history[MAX_PATH_LEN];
};

struct GameInfo{
    int maxMoves; 
    int pathLength; 
    int bombs[MAX_PATH_LEN]; 
    int treasure[MAX_PATH_LEN];
};

int main(){
    int i, j, more_input = 0;
    struct PlayerInfo player = {0, 0, 0, '\0', {0}};
    struct GameInfo game = {0, 0, {0}, {0}};

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.symbol);
    do
    {
        printf("Set the number of lives: ");
        scanf("%d", &player.lives);

        if (1 <= player.lives && player.lives <= MAX_LIVES)
        {
            more_input = 1;
        }
        else
        {
            printf("     Must be between %d and %d!\n", MIN_LIVES, MAX_LIVES);
        }
    } while (more_input == 0);
    for (i = 0; i < MAX_PATH_LEN; i++)
    {
        player.history[i] = '-';
    }
    if (more_input == 1)
    {
        printf("Player configuration set-up is complete\n\n");
        more_input = 0;
    }
    printf("GAME Configuration\n");
    printf("------------------\n");
    do
    {
        printf("Set the path length (a multiple of %d between %d-%d): ",
        MULTIPLE, MIN_PATH_LEN,MAX_PATH_LEN);
        scanf("%d", &game.pathLength);

        if (game.pathLength % 5 == 0 && MIN_PATH_LEN <= game.pathLength 
        && game.pathLength <= MAX_PATH_LEN)
        {
            do
            {
                printf("Set the limit for number of moves allowed: ");
                scanf("%d", &game.maxMoves);
                if (3 <= game.maxMoves && game.maxMoves <= max_moves)
                {
                    more_input = 1;
                }
                else
                {
                    printf("    Value must be between 3 and %2d\n",max_moves);
                }
            } while (more_input == 0);
        }
        else
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", 
            MULTIPLE,MIN_PATH_LEN,MAX_PATH_LEN);
        }
    } while (more_input == 0);
    more_input = 0;
    printf("\n");
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);
    for (i = 0; i < game.pathLength; i = i + MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
        for (j = i; j <= i + 4; j++)
        {
            scanf("%d", &game.bombs[j]);
        }
    }
    printf("BOMB placement set\n");
    printf("\n");
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);
    for (i = 0; i < game.pathLength; i = i + MULTIPLE)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
        for (j = i; j <= i + 4; j++)
        {
            scanf("%d", &game.treasure[j]);
        }
    }
    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");
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

    return 0;
}
