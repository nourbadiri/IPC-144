/*
*****************************************************************************
                        Final Project 
Full Name  : NOUR BADIRI           || Dyan Alpesh Patel     || Jawal Vishal Agrawal
Student ID#: 108435215             ||                       ||  
Email      : nbadiri@myseneca.ca   || dpatel488@myseneca.ca || jagrawal@myseneca.ca
Section    : NNN                   ||                       ||

Authenticity Declaration:
We declare this submission is the result of our own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of our own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// include the user library "weather.c" where the function prototypes are declared
#include "weather.h"

//////////////////////////////////////
// DISPLAY FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void){
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Input an integer
int inputInt(void){
    int value;
    char newline;
    do{
        scanf("%d%c",&value,&newline);
    if (newline != '\n'){
        printf("Error! Input a whole number: ");
        clearInputBuffer();
        }
    } while(newline != '\n');
    return value;
}

// Inpute integer in a range
int inputIntRange(int low, int high){
    int i;
    do{
        i = inputInt();
    if (i<low || i>high)
        printf("ERROR! Value must be between %d and %d inclusive: ",low, high);
    }while(i<low || i>high);
        return i; 
}

//Enter to continue
void Enter(void){
    printf("\n< Press [ENTER] key to continue >\n");
   while (getchar() != '\n') // Discard all remaining char's from the standard input buffer
   {
       ; // do nothing!
   }
}

// Display's the weather table header 
void displayWeatherTableHeader(void){
    printf("Year Month Precip.Amt Unit Region Name\n"
           "---- ----- ---------- ---- ------ ---------------\n");
}

// Display's the region table header 
void displayRegionTableHeader(void){
    printf("Region Name     Precip(mm)\n"   
           "------ -------- ----------\n");   
}

// Display's the month table header 
void displayMonthTableHeader(void){
    printf("Month     Precip(mm)\n"   
           "--------- ----------\n");
}

// Display's the region table header 
void displayLocationTableHeader(void){
    printf("Location        Precip(mm)\n"   
           "--------------- ----------\n"); 
}

// main menu (hub) for application
void menuMain(struct WeatherRecord *data, int recs){
    int selection;
    do{
        printf("=======================================================\n"
               "         Ontario Weather Analysis Service\n"
               "                  Year: 2021\n"
               "=======================================================\n"
               "1. View all data\n"
               "2. View by region (sorted DESCENDING by precip.)\n"
               "3. View by month (sorted ASCENDING by precip.)\n"
               "4. View by location name (sorted DESCENDING by precip.)\n"
               "-------------------------------------------------------\n"
               "0. Exit\n"
               "-------------------------------------------------------\n"
               "Selection: ");
        selection = inputIntRange(0,4);
        putchar('\n');
        switch (selection)
        {
        case 0:
            printf("Application Terminated!\n\n");
            break;
        case 1:
            displayAllRecords(data, recs);
            break;
        case 2:
            displayByRegion(data, recs);
            break;
        case 3:
            displayByMonth(data, recs);
            break;
        case 4:
            displayByLocation(data, recs);
            break;    
        }
    }while(selection);
}

// Display's all record data 
void displayAllRecords(struct WeatherRecord *data, int recs){
    int i;
    displayWeatherTableHeader();
    for(i=0;i<recs;i++){
        if(i%15==0 && i>0)
            Enter();
    printf("%d%6.2d%11.1lf%5c%7d %6s\n", data[i].date.year, data[i].date.month, data[i].precipAmt,
                 data[i].unit, data[i].location.regionCode, data[i].location.name);
    }
}

// Display's all record by region 
void displayByRegion(struct WeatherRecord *data, int recs){
    int region[4] = {10, 20, 30, 40};
    double precip[4] = {0, 0, 0, 0};
    int i;
   // get the total data for each region
   do{
   for (i=0; i<recs; i++){
       if (data[i].location.regionCode == region[0]){
           if (data[i].unit == 'c')
               precip[0] = data[i].precipAmt*10 + precip[0];
           else if (data[i].unit == 'm')
               precip[0] = data[i].precipAmt + precip[0];
       }
       if (data[i].location.regionCode == region[1]){
           if (data[i].unit == 'c')
               precip[1] = data[i].precipAmt*10 + precip[1];
           else if (data[i].unit == 'm')
               precip[1] = data[i].precipAmt + precip[1];
       }
       if (data[i].location.regionCode == region[2]){
           if (data[i].unit == 'c')
               precip[2] = data[i].precipAmt*10 + precip[2];
           else if (data[i].unit == 'm')
               precip[2] = data[i].precipAmt + precip[2];
       }
       if (data[i].location.regionCode == region[3]){
           if (data[i].unit == 'c')
               precip[3] = data[i].precipAmt*10 + precip[3];
           else if (data[i].unit == 'm')
               precip[3] = data[i].precipAmt + precip[3];
       }
   }
   }while(i<recs);
   // Sort the data
   int j, n = 4;
   for (i = 0; i < n - 1; i++){
       for (j = 0; j < n - i - 1; j++){
           if (precip[j] < precip[j + 1]){
               int temp = precip[j];
               precip[j] = precip[j + 1];
               precip[j + 1] = temp;
               temp = region[j];
               region[j] = region[j + 1];
               region[j + 1] = temp;
           }
       }
   }
   displayRegionTableHeader();
    double total=0;
    for (i=0; i<n; i++){
       total = total + precip[i];
       if (region[i] == region[0])
           printf("%6d %-8s %10.0lf\n", region[i], "Western", precip[i]);
       if (region[i] == region[1])
           printf("%6d %-8s %10.0lf\n", region[i], "Northern", precip[i]);
       if (region[i] == region[2])
           printf("%6d %-8s %10.0lf\n", region[i], "Eastern", precip[i]);
       if (region[i] == region[3])
           printf("%6d %-8s %10.0lf\n", region[i], "Central", precip[i]);
   }
   printf("------ -------- ----------\n");
   printf("         Total: %10.0lf\n", total);
   printf("       Average: %10.2lf\n", total/n);
}

// Display's all record by month
void displayByMonth(struct WeatherRecord *data, int recs){
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    double precip[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
   // get the total data for each month
   for (i=0; i<recs; i++){
       if (data[i].unit == 'c')
           precip[data[i].date.month-1] = data[i].precipAmt*10 + precip[data[i].date.month-1];
       else if (data[i].unit == 'm')
           precip[data[i].date.month-1] = data[i].precipAmt + precip[data[i].date.month-1];
   }
   // Sort the data
   int j, n = 12;
   for (i = 0; i < n - 1; i++){
       for (j = 0; j < n - i - 1; j++){
           if (precip[j] > precip[j + 1]){
               int temp = precip[j];
               precip[j] = precip[j + 1];
               precip[j + 1] = temp;
               temp = month[j];
               month[j] = month[j + 1]; 
               month[j + 1] = temp;
           }
       }
   }
   displayMonthTableHeader();
    double total=0;  
    for (i=0; i<n; i++){
       total = total + precip[i];
       if (month[i] == 1)
           printf("%-9s %10.0lf\n", "January", precip[i]);
       if (month[i] == 2)
           printf("%-9s %10.0lf\n", "Februay", precip[i]);
       if (month[i] == 3)
           printf("%-9s %10.0lf\n", "March", precip[i]);
       if (month[i] == 4)
           printf("%-9s %10.0lf\n", "April", precip[i]);
       if (month[i] == 5)
           printf("%-9s %10.0lf\n", "May", precip[i]);
       if (month[i] == 6)
           printf("%-9s %10.0lf\n", "June", precip[i]);
       if (month[i] == 7)
           printf("%-9s %10.0lf\n", "July", precip[i]);
       if (month[i] == 8)
           printf("%-9s %10.0lf\n", "August", precip[i]);
       if (month[i] == 9)
           printf("%-9s %10.0lf\n", "September", precip[i]);
       if (month[i] == 10)
           printf("%-9s %10.0lf\n", "October", precip[i]);
       if (month[i] == 11)
           printf("%-9s %10.0lf\n", "November", precip[i]);
       if (month[i] == 12)
           printf("%-9s %10.0lf\n", "December", precip[i]);
   }
   printf("--------- ----------\n");
   printf("   Total: %10.0lf\n", total);
   printf(" Average: %10.2lf\n", total/n);
}
// Display's all record by location 
void displayByLocation(struct WeatherRecord *data, int recs){
    char location[8][NAME_LEN+1] = {"Chatham-Kent", "Halton", "Renfrew", "Kenora", 
                                    "Simcoe", "Essex", "Ottawa", "Thunder Bay"};
    double precip[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i;
   // get the total data for each location
   for (i=0; i<recs; i++){
       if (strcmp(data[i].location.name, "Chatham-Kent" ) == 0){
           if (data[i].unit == 'c')
               precip[0] = data[i].precipAmt*10 + precip[0];
           else if (data[i].unit == 'm')
               precip[0] = data[i].precipAmt + precip[0];
       }
       if (strcmp(data[i].location.name, "Halton" ) == 0){
           if (data[i].unit == 'c')
               precip[1] = data[i].precipAmt*10 + precip[1];
           else if (data[i].unit == 'm')
               precip[1] = data[i].precipAmt + precip[1];
       }
       if (strcmp(data[i].location.name, "Renfrew" ) == 0){
           if (data[i].unit == 'c')
               precip[2] = data[i].precipAmt*10 + precip[2];
           else if (data[i].unit == 'm')
               precip[2] = data[i].precipAmt + precip[2];
       }
       if (strcmp(data[i].location.name, "Kenora" ) == 0){
           if (data[i].unit == 'c')
               precip[3] = data[i].precipAmt*10 + precip[3];
           else if (data[i].unit == 'm')
               precip[3] = data[i].precipAmt + precip[3];
       }
       if (strcmp(data[i].location.name, "Simcoe" ) == 0){
           if (data[i].unit == 'c')
               precip[4] = data[i].precipAmt*10 + precip[4];
           else if (data[i].unit == 'm')
               precip[4] = data[i].precipAmt + precip[4];
       }
       if (strcmp(data[i].location.name, "Essex" ) == 0){
           if (data[i].unit == 'c')
               precip[5] = data[i].precipAmt*10 + precip[5];
           else if (data[i].unit == 'm')
               precip[5] = data[i].precipAmt + precip[5];
       }
       if (strcmp(data[i].location.name, "Ottawa" ) == 0){
           if (data[i].unit == 'c')
               precip[6] = data[i].precipAmt*10 + precip[6];
           else if (data[i].unit == 'm')
               precip[6] = data[i].precipAmt + precip[6];
       }
       if (strcmp(data[i].location.name, "Thunder Bay" ) == 0){
           if (data[i].unit == 'c')
               precip[7] = data[i].precipAmt*10 + precip[7];
           else if (data[i].unit == 'm')
               precip[7] = data[i].precipAmt + precip[7];
       }
   }
   // Sort the data
   int j, n = 8;
   for (i = 0; i < n - 1; i++){
       for (j = 0; j < n - i - 1; j++){
           if (precip[j] < precip[j + 1]){
               int temp = precip[j];
               precip[j] = precip[j + 1];
               precip[j + 1] = temp;
               char stemp[NAME_LEN+1];
               strcpy(stemp, location[j]);
               strcpy(location[j], location[j + 1]);
               strcpy(location[j + 1], stemp);
           }
       }
   }
   displayLocationTableHeader();
    double total=0;
    for (i=0; i<n; i++){
       total = total + precip[i];
       printf("%15s %10.0lf\n", location[i], precip[i]);
   }
   printf("--------------- ----------\n");
   printf("         Total: %10.0lf\n", total);
   printf("       Average: %10.2lf\n", total/n);
}

// Import record data from file into a weather record struct
int importWeatherDataFile(FILE* fp, struct WeatherRecord* data, int max){
    int recs = 0;
    if (fp != NULL){
        while (recs < max &&
               fscanf(fp, "%d,%d,%lf,%c,%d,%15[^\n]\n",
                      &data[recs].date.year, &data[recs].date.month,
                      &data[recs].precipAmt, &data[recs].unit,
                      &data[recs].location.regionCode,
                      data[recs].location.name) == 6)
        {
            recs++;
        }
    }
    return recs;   
}