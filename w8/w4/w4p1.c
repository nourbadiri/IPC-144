/*
*****************************************************************************
                          Workshop - #4 (P1)
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

int main(void)
{
    char loopType; // D,W,F,Q
    int  loopCount; // 3-20
    int  i;
    do {
        printf("+----------------------+\n");
        printf("Loop application STARTED\n");
        printf("+----------------------+\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D': break;
        case 'W': break;
        case 'F': break;
        case 'Q': break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'W':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'W':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'F':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'F':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'Q':
            if (loopType != 0) {
                printf("ERROR: To quit, the number of iterations should be 0!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'Q':
            if (loopType != 0) {
                printf("ERROR: To quit, the number of iterations should be 0!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            else {
                i = 1;
                printf("DO-WHILE: ");
                do {
                    printf("D");
                } while (i++ < loopCount);
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'W':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            else {
                i = 0;
                printf("WHILE   : ");
                while (i++ < loopCount) {
                    printf("W");
                }
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'F':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            else {
                printf("FOR     : ");
                for (i = 0; i < loopCount; i++)
                {
                    printf("F");
                }
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'W':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            else {
                i = 0;
                printf("WHILE   : ");
                while (i++ < loopCount) {
                    printf("W");
                }
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'F':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            else {
                printf("FOR     : ");
                for (i = 0; i < loopCount; i++)
                {
                    printf("F");
                }
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D':
            if (loopCount < 3 || loopCount > 20)
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");       
            else {
                i = 1;
                printf("DO-WHILE: ");
                do {
                    printf("D");
                } while (i++ < loopCount);
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'D':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'W':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        switch (loopType) {
        case 'F':
            if (loopCount < 3 || loopCount > 20) {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else {
            }
            break;
        default: printf("ERROR: Invalid entered value(s)!\n");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopCount);
        printf("\n");
    } while (loopType != 'Q' && loopCount != 0);
        printf("+--------------------+\n");
        printf("Loop application ENDED\n");
        printf("+--------------------+\n");
        return 0;
    }

