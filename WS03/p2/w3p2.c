/*
*****************************************************************************
                          Workshop - #3 (P2)
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
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    int patShirts, salShirts, tomShirts;
    float Smallshirt_price, Mediumshirt_price, Largeshirt_price;
    float PatSub_total, PatTax;
    float SalSub_total, SalTax;
    float TomSub_total, TomTax;
printf("Set Shirt Prices\n");
printf("================\n");
printf("Enter the price for a SMALL shirt: $");
scanf("%f", &Smallshirt_price);
printf("Enter the price for a MEDIUM shirt: $");
scanf("%f", &Mediumshirt_price);
printf("Enter the price for a LARGE shirt: $");
scanf("%f", &Largeshirt_price);
printf("\n");
printf("Shirt Store Price List\n");
printf("======================\n");
printf("SMALL  : $%0.2f\n", Smallshirt_price);
printf("MEDIUM : $%0.2f\n", Mediumshirt_price);
printf("LARGE  : $%0.2f\n", Largeshirt_price);
printf("\n");
printf("Patty's shirt size is '%c'\n", patSize);
printf("Number of shirts Patty is buying: ");
scanf("%d", &patShirts);
printf("\n");
printf("Tommy's shirt size is '%c'\n", tomSize);
printf("Number of shirts Tommy is buying: ");
scanf("%d", &tomShirts);
printf("\n");
printf("Sally's shirt size is '%c'\n", salSize);
printf("Number of shirts Sally is buying: ");
scanf("%d", &salShirts);
printf("\n");
        PatSub_total = Smallshirt_price * patShirts;
        PatTax = PatSub_total*TAX + 0.005;
printf("Customer Size Price Qty Sub-Total Tax Total\n");
printf("-------- ---- ----- --- --------- --------- ---------\n");
printf("Patty %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, Smallshirt_price, patShirts, PatSub_total, PatTax, PatSub_total+PatTax);

























    return 0;
}