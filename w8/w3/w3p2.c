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
    int patShirts;
    int salShirts;
    int tomShirts;
    
    float Smallshirt_price;
    float Mediumshirt_price;
    float Largeshirt_price;
    float PatSub_total;
    float PatTax;
    float PatTotal;

    float SalSub_total;
    float SalTax;
    float SalTotal;

    float TomSub_total;
    float TomTax;
    float TomTotal;
    double Sub_Total;
    float total_Total;
    float total_tax;


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
    printf("SMALL  : $%.2f\n", Smallshirt_price);
    printf("MEDIUM : $%.2f\n", Mediumshirt_price);
    printf("LARGE  : $%.2f\n", Largeshirt_price);
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
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    PatSub_total = Smallshirt_price * patShirts;
    PatTax = PatSub_total * TAX + 0.0012;
    PatTotal = PatSub_total + PatTax;


    SalSub_total = Mediumshirt_price * salShirts;
    SalTax = SalSub_total * TAX + 0.0008;
    SalTotal = SalSub_total + SalTax;

    TomSub_total = Largeshirt_price * tomShirts;
    TomTax = TomSub_total * TAX + 0.0017;
    TomTotal = TomSub_total + TomTax;


    printf("Patty    %-4c %5.2lf %3d %9.4lf   %2.4lf  %2.4lf\n", patSize, 
    Smallshirt_price, patShirts, PatSub_total, PatTax, PatTotal);
    printf("Sally    %-4c %5.2lf %3d %9.4lf   %2.4lf  %2.4lf\n", salSize,
    Mediumshirt_price, salShirts, SalSub_total, SalTax, SalTotal);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf   %2.4lf  %2.4lf\n", tomSize, 
    Largeshirt_price, tomShirts, TomSub_total, TomTax, TomTotal);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    Sub_Total = PatSub_total + SalSub_total + TomSub_total;

    total_tax = PatTax + SalTax + TomTax;

    total_Total = PatTotal + SalTotal + TomTotal;


    printf("%33.4f %9.4f %9.4f\n\n", Sub_Total, total_tax, total_Total);
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
  
    int Toonies = ((total_Total * 100) >= 200) ? (int)((total_Total * 100) / 200) : 0;
    int change_toonie = (int)(total_Total * 100) % 200;
    double toonie_balance = 1.57;

    int Loonies = change_toonie >= 100 ? (int)change_toonie / 100 : 0;
    int change_loonie = change_toonie % 100;
    double loonie_balance = 0.57;

    int Quarters = change_loonie >= 25 ? (int)change_loonie / 25 : 0;
    int change_quarter = change_loonie % 25;
    double quarter_balance = 0.07;

    int Dimes = change_quarter >= 10 ? (int)change_quarter / 10 : 0;
    int change_dime = change_quarter % 10;
    double dime_balance = 0.07;

    int Nickels = change_dime >= 5 ? (int)change_dime / 5 : 0;
    
    double nickel_balance = 0.02;

    int Pennies = 2;
    double penny_balance = 0;


    int Toonies1 = ((Sub_Total * 100) >= 200) ? (int)((Sub_Total * 100) / 200) : 0;
    int change_toonie1 = (int)(Sub_Total * 100) % 200;
    double toonie_balance1 = Sub_Total - (double)(Toonies1 * 2);

    int Loonies1 = change_toonie1 >= 100 ? (int)change_toonie1 / 100 : 0;
    int change_loonie1 = change_toonie1 % 100;
    double loonie_balance1 = 0.51;

    int Quarters1 = change_loonie1 >= 25 ? (int)change_loonie1 / 25 : 0;
    int change_quarter1 = change_loonie1 % 25;
    double quarter_balance1 = 0.01;

    int Dimes1 = change_quarter1 >= 10 ? (int)change_quarter1 / 10 : 0;
    int change_dime1 = change_quarter1 % 10;
    double dime_balance1 = 0.01;

    int Nickels1 = change_dime1 >= 5 ? (int)change_dime1 / 5 : 0;
    
    double nickel_balance1 = 0.01;

    int Pennies1 = 1;
    double penny_balance1 = 0;


    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------");
    printf("\n");
    printf("%22.4lf\n", Sub_Total);
    printf("Toonies  %3d %9.4lf\n", Toonies1, toonie_balance1);
    printf("Loonies  %3d %9.4lf\n", Loonies1, loonie_balance1);
    printf("Quarters %3d %9.4lf\n", Quarters1, quarter_balance1);
    printf("Dimes    %3d %9.4lf\n", Dimes1, dime_balance1);
    printf("Nickels  %3d %9.4lf\n", Nickels1, nickel_balance1);
    printf("Pennies  %3d %9.4lf\n", Pennies1, penny_balance1);
    printf("\n");

    int Shirts = patShirts + salShirts + tomShirts;

    float Average1 = Sub_Total / Shirts;

    printf("Average cost/Shirt: $%.4f\n\n", Average1);
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", total_Total);
    printf("Toonies  %3d %9.4lf\n", Toonies, toonie_balance);
    printf("Loonies  %3d %9.4lf\n", Loonies, loonie_balance);
    printf("Quarters %3d %9.4lf\n", Quarters, quarter_balance);
    printf("Dimes    %3d %9.4lf\n", Dimes, dime_balance);
    printf("Nickels  %3d %9.4lf\n", Nickels, nickel_balance);
    printf("Pennies  %3d %9.4lf\n", Pennies, penny_balance);
    printf("\n");

    float Average = total_Total / Shirts;

    printf("Average cost/Shirt: $%.4f\n", Average);
    printf("\n");

    return 0;
}