/*
*****************************************************************************
                          Workshop - #2 (P2)
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

int main()
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char Coffee1_Type = 'l';
    char Coffee2_Type = 'B';
    char Coffee3_Type = 'L';

    char Coffee1_Grind = 'c';
    char Coffee2_Grind = 'F';
    char Coffee3_Grind = 'f';

    int Coffee1_Weight = 250;
    int Coffee2_Weight = 500;
    int Coffee3_Weight = 1000;

    char Coffee1_Cream = 'y';
    char Coffee2_Cream = 'N';
    char Coffee3_Cream = 'n';

    float Coffee1_Temp = 65.7;
    float Coffee2_Temp = 70.0;
    float Coffee3_Temp = 80.5;

    char CoffeeStrength = 'm' || 'R';
    int DailyServings = 6 || 10;
    char CoffeeMaker = 'c' || 'R';

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &Coffee1_Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &Coffee1_Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &Coffee1_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &Coffee1_Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &Coffee1_Temp);
    printf("\n");
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &Coffee2_Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &Coffee2_Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &Coffee2_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &Coffee2_Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &Coffee2_Temp);
    printf("\n");
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &Coffee3_Type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &Coffee3_Grind);
    printf("Bag weight (g): ");
    scanf(" %d", &Coffee3_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &Coffee3_Cream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f", &Coffee3_Temp);
    printf("\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 | %3d   | %3d   | %4d   | %3d  |  %3d |  %5.3f | %3d   |  %4.1f | %5.1f\n", 
     Coffee1_Type=='l', Coffee1_Type=='B', Coffee1_Grind=='c', Coffee1_Grind=='F', Coffee1_Weight,
     Coffee1_Weight/GRAMS_IN_LBS, Coffee1_Cream=='y', Coffee1_Temp, (Coffee1_Temp * 1.8) + 32);
    printf(" 2 | %3d   | %3d   | %4d   | %3d  |  %3d |  %5.3f | %3d   |  %4.1f | %5.1f\n",
     Coffee2_Type=='l', Coffee2_Type=='B', Coffee2_Grind=='c', Coffee2_Grind=='F', Coffee2_Weight,
     Coffee2_Weight/GRAMS_IN_LBS, Coffee2_Cream=='Y', Coffee2_Temp, (Coffee2_Temp * 1.8) + 32);
    printf(" 3 | %3d   | %3d   | %4d   | %3d  | %3d | %6.3f | %3d   |  %4.1f | %5.1f\n\n",
     Coffee3_Type=='L', Coffee3_Type=='B', Coffee3_Grind=='c', Coffee3_Grind=='f', Coffee3_Weight, 
     Coffee3_Weight/GRAMS_IN_LBS, Coffee3_Cream== 'Y', Coffee3_Temp, (Coffee3_Temp * 1.8) + 32);
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &CoffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &Coffee1_Cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &DailyServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &CoffeeMaker);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",
     CoffeeStrength='m'&&Coffee1_Type, CoffeeMaker!='R'&&!Coffee1_Grind, Coffee1_Weight!= 250,
     Coffee1_Cream=='y', Coffee1_Temp>70);
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
     CoffeeStrength!='R'&&!Coffee2_Type, CoffeeMaker='c'&&Coffee2_Grind, 250<Coffee2_Weight||Coffee2_Weight<1000,
     Coffee2_Cream!='N', Coffee2_Temp>=70);
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", 
     CoffeeStrength='m'&&Coffee3_Type, CoffeeMaker='c'&&Coffee3_Grind, Coffee3_Weight!=1000,
     Coffee3_Cream!='n', Coffee3_Temp>=70);
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &CoffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &Coffee2_Cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &DailyServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &CoffeeMaker);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", 
    CoffeeStrength!='M'&&!Coffee1_Type, CoffeeMaker='R'&&Coffee1_Grind, Coffee1_Weight != 250,
    Coffee1_Cream!='y', 60<Coffee1_Temp||Coffee1_Temp<70);
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
    CoffeeStrength='R'&&Coffee2_Type, CoffeeMaker!='c'&&!Coffee2_Grind, Coffee2_Weight!=500, 
    Coffee2_Cream=='N', Coffee2_Temp<70);
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", 
    CoffeeStrength!='m'&&!Coffee3_Type, CoffeeMaker!='c'&&!Coffee3_Grind, Coffee3_Weight==1000, 
    Coffee3_Cream=='n', Coffee3_Temp<80.5);
    printf("Hope you found a product that suits your likes!\n\n");
    return 0;
}
