/*
*****************************************************************************
                          Workshop - #6 (P2)
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
#define max_wishlist 10

int main(){

float income;
int wishlist, i, flag=0;
const int minCost = 100, minIncome = 500, maxIncome = 400000;
double cost[max_wishlist], totalcost=0; 
int priority[max_wishlist];
char financeOption[max_wishlist];


printf("+--------------------------+\n");
printf("+   Wish List Forecaster   |\n");
printf("+--------------------------+\n\n");
do
{
printf("Enter your monthly NET income: $");
scanf("%f", &income);
    if(income<minIncome)
printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
    if(income>maxIncome)
printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
} while (income<minIncome || income>maxIncome);
printf("\n");
do
{
printf("How many wish list items do you want to forecast?: ");
scanf("%d", &wishlist);
    if(wishlist<=1 || wishlist>max_wishlist)
printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
} while (wishlist<=1 || wishlist>max_wishlist);

    for(i = 1; i<=wishlist; i++){  // iteration of number of wishlists
        printf("\nItem-%d Details:\n",i);
do // Cost
{
printf("   Item cost: $");
scanf("%lf", &cost[i]);
    if(minCost > cost[i])
printf("      ERROR: Cost must be at least $100.00\n");
} while (minCost > cost[i]);

do // Priority
{
printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
scanf("%d",&priority[i]);
if(priority[i]<1 || priority[i]>3)
printf("      ERROR: Value must be between 1 and 3\n");
} while (priority[i]<1 || priority[i]>3);

do // Finance Option
{
printf("   Does this item have financing options? [y/n]: ");
scanf(" %c",&financeOption[i]); 
if(financeOption[i]!='n' && financeOption[i]!='y')
printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
} while (financeOption[i]!='n' && financeOption[i]!='y');
    }
printf("\n");
printf("Item Priority Financed        Cost\n");
printf("---- -------- -------- -----------\n");
for(i = 1;i<=wishlist;i++){ // iteration of number of wishlists
printf("%3d  %5d    %5c    %11.2lf\n",i,priority[i],financeOption[i],cost[i]);

totalcost = totalcost + cost[i];
}
printf("---- -------- -------- -----------\n");
printf("                      $%11.2lf\n",totalcost);
    // Displaying Menu
int option;
flag = 0;
while(flag==0){
printf("\nHow do you want to forecast your wish list?\n");
printf(" 1. All items (no filter)\n");
printf(" 2. By priority\n");
printf(" 0. Quit/Exit\n");  
printf("Selection: ");
scanf("%d",&option);

    if(option == 1){
        printf("\n====================================================\n");
        printf("Filter:   All items\n");
        printf("Amount:   $%1.2lf\n",totalcost);

            // Calculate Years and Months
        int count = 0,flagForFinance = 0;
        double temp = 0;
            
        while(temp <= totalcost){
        temp = temp + income;
        count++;
            }
        printf("Forecast: %d years, %d months\n",(count/12),(count%12));

            // Checking Financing Options
        for(i = 1;i<=wishlist;i++){
        if(financeOption[i] == 'y'){
        flagForFinance = 1;
        }
        }

        if(flagForFinance == 1){
        printf("NOTE: Financing options are available on some items.\n");      
        printf("      You can likely reduce the estimated months.\n");
        }

        printf("====================================================\n");
    }else if(option == 2){  // As Per Priority
        int priorityFilter,flagForFinance = 0;
        double totalCostOfPriority = 0;  
        printf("\nWhat priority do you want to filter by? [1-3]: ");
        scanf("%d",&priorityFilter);

        printf("\n====================================================\n");
        printf("Filter:   by priority (%d)\n",priorityFilter); 

            //Checking For Priority
        for(i = 1;i<=wishlist;i++){
        if(priority[i] == priorityFilter){
        totalCostOfPriority = totalCostOfPriority + cost[i];
            // Checking Financing Options
        if(financeOption[i] == 'y'){
        flagForFinance = 1;
        }
        }
        }
        printf("Amount:   $%1.2lf\n",totalCostOfPriority);

            // Calculate Years and Months
        int count = 0;
        double temp = 0;
            
        while(temp <= totalCostOfPriority){
        temp = temp + income;
        count++;
        }
        printf("Forecast: %d years, %d months\n",(count/12),(count%12));

    if(flagForFinance == 1){
        printf("NOTE: Financing options are available on some items.\n");    
        printf("      You can likely reduce the estimated months.\n");
        }
        printf("====================================================\n");

    }else if(option == 0){
        flag = 1;
    }else{
        printf("\nERROR: Invalid menu selection.\n");
        }
    }
    printf("\nBest of luck in all your future endeavours!\n");   
    return 0;
}