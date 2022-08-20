/*
*****************************************************************************
                          Workshop - #6 (P1)
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
int wishlist=1, i;
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
    printf("                      $%11.2lf\n\n",totalcost);

    printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}