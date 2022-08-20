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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "weather.h"

#define MAX_RECORDS 250
#define NAME_LEN 15 


int main(){
   
    struct WeatherRecord data[MAX_RECORDS];
    FILE *fp;
    fp = fopen("Weatherdata.txt", "r");
    int recs = importWeatherDataFile(fp, data, MAX_RECORDS);
     
    menuMain(data, recs);
    
    return 0;
}