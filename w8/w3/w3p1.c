/*
*****************************************************************************
                          Workshop - #3 (P1)
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
    const char patSize = 'S';
    int Num_shirts;
    float Smallshirt_price, Mediumshirt_price, Largeshirt_price;
    float Sub_total;
    float Taxes;
    int TaxesinPennies;
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
scanf("%d", &Num_shirts);
printf("\n");
    Sub_total = Smallshirt_price * Num_shirts;
    Taxes = Sub_total * TAX + 0.005;
    TaxesinPennies = Taxes * 100.0;
    Taxes = TaxesinPennies / 100.0;
printf("Patty's shopping cart...\n");
printf("Contains : %d shirts\n", Num_shirts);
printf("Sub-total: $%8.4f\n", Sub_total);
printf("Taxes    : $%8.4f\n", Taxes);
printf("Total    : $%8.4f\n", Sub_total+Taxes);
printf("\n");
    return 0;   
}