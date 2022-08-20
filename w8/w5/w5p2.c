/*
*****************************************************************************
                          Workshop - #5 (P2)
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

#define MIN_YEAR 2012 
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main()
{
const int JAN = 1;
const int DEC = 12;
int month, year, i;
float rating, morning = 0, evening = 0;


printf("General Well-being Log\n");
printf("======================\n");
do {
    printf("Set the year and month for the well-being log (YYYY MM): ");
    scanf("%d %d", &year, &month);
    if (year < MIN_YEAR || year > MAX_YEAR)
        printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
    if (month < JAN || month > DEC)
        printf("   ERROR: Jan.(1) - Dec.(12)\n");    
} while ((year < MIN_YEAR || year > MAX_YEAR) || (month < JAN || month > DEC));
printf("\n*** Log date set! ***\n");
printf("\n");
for(i = 1; i <= LOG_DAYS; i++){      
switch(month){
    case 1: printf("%d-JAN-",year);break;
    case 2: printf("%d-FEB-",year);break;
    case 3: printf("%d-MAR-",year);break;
    case 4: printf("%d-APR-",year);break;  
    case 5: printf("%d-MAY-",year);break;
    case 6: printf("%d-JUN-",year);break;
    case 7: printf("%d-JUL-",year);break;
    case 8: printf("%d-AUG-",year);break;
    case 9: printf("%d-SEP-",year);break;
    case 10: printf("%d-OCT-",year);break;
    case 11: printf("%d-NOV-",year);break;      
    case 12: printf("%d-DEC-",year);break;            
 }
 printf("%02d\n",i);
do {
   printf("   Morning rating (0.0-5.0): ");
   scanf("%f", &rating);
if (rating < 0.0 || rating > 5.0) 
   printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");

}while (rating < 0.0 || rating > 5.0);
morning = morning + rating;  
do {
   printf("   Evening rating (0.0-5.0): ");
   scanf("%f", &rating);
if (rating < 0.0 || rating > 5.0) 
   printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");

}while (rating < 0.0 || rating > 5.0);
evening = evening + rating; 
printf("\n");
}
printf("Summary\n");
printf("=======\n");
printf("Morning total rating: %.3f\n",morning);
printf("Evening total rating:  %.3f\n",evening);
printf("----------------------------\n");
printf("Overall total rating: %.3f\n", (morning+evening));
printf("\n");
printf("Average morning rating:  %.1f\n", morning/LOG_DAYS);
printf("Average evening rating:  %.1f\n", evening/LOG_DAYS);    
printf("----------------------------\n");
printf("Average overall rating:  %.1f\n", (((morning/LOG_DAYS)+(evening/LOG_DAYS))/2));
printf("\n");
    return 0;
}