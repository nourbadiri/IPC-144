/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : NOUR BADIRI    
Student ID#: 108435215
Email      : nbadiri@myseneca.ca1
Section    : NNN

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#include <stdio.h>

int main(void)
{
    int apples = -1,oranges  = -1,pears = -1,tomatoes  = -1,cabbages  = -1;
    int done = 1,pick=0,temp=0;

    while(done != 0){
        printf("Grocery Shopping\n");
        printf("================\n");

        while(apples<0){
            printf("How many APPLES do you need? : ");
            scanf("%d",&apples);

            if(apples<0){
                printf("ERROR: Value must be 0 or more.\n");
            }else{
                printf("\n");
            }
        }

        while(oranges<0){
            printf("How many ORANGES do you need? : ");
            scanf("%d",&oranges);

            if(oranges<0){
                printf("ERROR: Value must be 0 or more.\n");
            }else{
                printf("\n");
            }
        }

        while(pears<0){
            printf("How many PEARS do you need? : ");
            scanf("%d",&pears);

            if(pears<0){
                printf("ERROR: Value must be 0 or more.\n");
            }else{
                printf("\n");
            }
        }

        while(tomatoes<0){
            printf("How many TOMATOES do you need? : ");
            scanf("%d",&tomatoes);

            if(tomatoes<0){
                printf("ERROR: Value must be 0 or more.\n");
            }else{
                printf("\n");
            }
        }

        while(cabbages<0){
            printf("How many CABBAGES do you need? : ");
            scanf("%d",&cabbages);

            if(cabbages<0){
                printf("ERROR: Value must be 0 or more.\n");
            }else{
                printf("\n");
            }
        }

        if(apples != 0 || oranges != 0 || pears != 0 || tomatoes != 0 || cabbages != 0){
            printf("--------------------------\n");
            printf("Time to pick the products!");
            printf("\n--------------------------\n\n");
        }

        //pick apples
        while(temp != apples && apples != 0){
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d",&pick);
            if(apples < pick || pick > (apples-temp)){
                printf("You picked too many... only %d more APPLE(S) are needed.\n",(apples-temp));
            }
            else if(pick<=0){
                printf("ERROR: You must pick at least 1!\n");
            }
            else if(pick<=(apples-temp)){
                temp = temp + pick;
                if(temp != apples){
                    printf("Looks like we still need some APPLES...\n");
                }
                else{
                    printf("Great, that's the apples done!\n");
                    printf("\n");
                }       
            }
        }
        pick = 0;
        temp = 0;
        
        //pick oranges
        while(temp != oranges && oranges != 0){
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d",&pick);
            if(oranges < pick || pick > (oranges-temp)){
                printf("You picked too many... only %d more ORANGE(S) are needed.\n",(oranges-temp));
            }
            else if(pick<=0){
                printf("ERROR: You must pick at least 1!\n");
            }
            else if(pick<=(oranges-temp)){
                temp = temp + pick;
                if(temp != oranges){
                    printf("Looks like we still need some ORANGES...\n");
                }
                else{
                    printf("Great, that's the oranges done!\n");
                    printf("\n");
                }
            }
        }
        pick = 0;
        temp = 0;
        
        //pick pears
        while(temp != pears && pears != 0){
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d",&pick);
            if(pears < pick || pick > (pears-temp)){
                printf("You picked too many... only %d more PEAR(S) are needed.\n",(pears-temp));
            }
            else if(pick<=0){
                printf("ERROR: You must pick at least 1!\n");
            }
            else if(pick<=(pears-temp)){
                temp = temp + pick;
                if(temp != pears){
                    printf("Looks like we still need some PEARS...\n");
                }
                else{
                    printf("Great, that's the pears done!\n");
                    printf("\n");
                }
            }
        }
        pick = 0;
        temp = 0;
        
        //pick tomatoes
        while(temp != tomatoes && tomatoes != 0){
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d",&pick);
            if(tomatoes < pick || pick > (tomatoes-temp)){
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n",(tomatoes-temp));
            }
            else if(pick<=0){
                printf("ERROR: You must pick at least 1!\n");
            }
            else if(pick<=(tomatoes-temp)){
                temp = temp + pick;
                if(temp != tomatoes){
                     printf("Looks like we still need some TOMATOES...\n");
                }
                else{
                    printf("Great, that's the tomatoes done!\n");
                    printf("\n");
                }
            }
        }
        pick = 0;
        temp = 0;
        
        //pick cabbages
        while(temp != cabbages && cabbages != 0){
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d",&pick);
            if(cabbages < pick || pick > (cabbages-temp)){
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n",(cabbages-temp));
            }
            else if(pick<=0){
                printf("ERROR: You must pick at least 1!\n");
            }
            else if(pick<=(cabbages-temp)){
                temp = temp + pick;
                if(temp != cabbages){
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else{
                    printf("Great, that's the cabbages done!\n");
                    printf("\n");
                }
            }
        }
        pick = 0;
        temp = 0;
        
        if(apples != 0 || oranges != 0 || pears != 0 || tomatoes != 0 || cabbages != 0){
            printf("All the items are picked!\n");
        }

        printf("\nDo another shopping? (0=NO): ");
        scanf("%d",&done);
        printf("\n");
        apples = -1;
        oranges = -1;
        pears = -1;
        tomatoes = -1;
        cabbages = -1;
        //end of while loop (done!=0)
    }

    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}
