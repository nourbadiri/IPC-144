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
#ifndef WEATHER_H
#define WEATHER_H

// Records to display
#define MAX_RECORDS 250
#define NAME_LEN 15

//////////////////////////////////////
// Structures
//////////////////////////////////////

// Data type: Date
struct Date{
    int year;
    int month;
};

// Data type: Location
struct Location{
    int regionCode;
    char name[NAME_LEN+1];
};

// Data type: WeatherRecord
struct WeatherRecord {
    struct Date date;
    double precipAmt;
    char unit;
    struct Location location;
};

//////////////////////////////////////
// DISPLAY FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Input an integer
int inputInt(void);

// Inpute integer in a range
int inputIntRange(int,int);

// Display's the weather table header
void displayWeatherTableHeader(void);

// Display's the region table header (table format)
void displayRegionTableHeader(void);

// Display's the month table header 
void displayMonthTableHeader(void);

// Display's the region table header 
void displayLocationTableHeader(void);

//////////////////////////////////////
// MENU & ITEM SELECTION FUNCTIONS
//////////////////////////////////////

// Menu: Main
void menuMain(struct WeatherRecord* data, int recs);

//Enter to continue
void Enter(void);

// Display's all record data 
void displayAllRecords(struct WeatherRecord *data, int recs);

// Display's all record by region 
void displayByRegion(struct WeatherRecord *data, int recs);

// Display's all record by month 
void displayByMonth(struct WeatherRecord *data, int recs);

// Display's all record by location 
void displayByLocation(struct WeatherRecord *data, int recs);

//////////////////////////////////////
// FILE FUNCTIONS
//////////////////////////////////////

// Import record data from file into a weather record struct
int importWeatherDataFile(FILE* fp, struct WeatherRecord* data, int max);


// !WEATHER_H
#endif 