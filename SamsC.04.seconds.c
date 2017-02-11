/* Illustrates the modulus operator. */
/* inputs a number of seconds, and converts to hours, minutes, and seconds. */
// minute = 60 seconds                  : 60
// hour = 60 * 60 seconds               : 3600
// day = 24 * 60 * 60 seconds           : 86400
// year = 365 * 24 * 60 * 60 seconds    : 31536000

#include <stdio.h>                                      // from original script

/* Define constants */

#define SECS_PER_MIN    60                                 // from original script
#define MIN_PER_HOUR    60
#define HOURS_PER_DAY   24
#define DAYS_PER_YEAR   365
#define SECS_PER_YEAR   31536000
#define SECS_PER_HOUR   3600                              // from original script
#define SECS_PER_DAY    86400
#define LIMIT           4294967295

unsigned int seconds, minutes, hours, days, years, secs_remain, mins_remain, hours_remain, days_remain;     // modified from original script

int main(void)                                                                                          // from original script
{
    seconds = minutes = hours = days = years = secs_remain = mins_remain = hours_remain = days_remain = 0;
    /* Input the number of seconds. */

    printf( "Enter the number of seconds ( > 0, < %u ): \n", LIMIT );                  // modified from original script
    scanf( "%u", &seconds );                                                                            // from original script

    years = seconds /SECS_PER_YEAR;
    days = seconds / SECS_PER_DAY;
    hours = seconds / SECS_PER_HOUR;                                                                    // from original script
    minutes = seconds / SECS_PER_MIN;                                                                   // from original script
    days_remain = days % DAYS_PER_YEAR;
    hours_remain = hours % HOURS_PER_DAY;
    mins_remain = minutes % MIN_PER_HOUR;                                                               // modified from original script
    secs_remain = seconds % SECS_PER_MIN;                                                               // from original script

    printf( "%u seconds is equal to ", seconds );                                                       // from original script

    if ( seconds < SECS_PER_HOUR )
    {
         printf( "%u m, and %u s\n", minutes, secs_remain );
         return 0;
    }
         else if((seconds >= SECS_PER_HOUR ) && (seconds < SECS_PER_DAY ))
         {
              printf( "%u h, %u m, and %u s\n", hours, mins_remain, secs_remain );                  // from original script
              return 0;                                                                             // from original script
         }    
         else if((seconds >= SECS_PER_DAY ) && (seconds < SECS_PER_YEAR ))
         {
              printf( "%u d, %u h, %u m, and %u s\n", days, hours_remain, mins_remain, secs_remain );
              return 0;
         }            
         else if((seconds >= SECS_PER_YEAR ) && (seconds < LIMIT ))
         {
             printf( "%u y %u d, %u h, %u m, and %u s\n", years, days_remain, hours_remain, mins_remain, secs_remain );
             return 0;
         }   
         else if(seconds > LIMIT )
         {
             printf("error: excessive amount of seconds.\n");
             printf("range for seconds must be between 0 and %u!\n", LIMIT );
             printf("If number of seconds exceeds %u, then it is beyond range for type 'int'.\n", LIMIT );
             printf("EXITING seconds program. \n");
             return 1;
         }
    }
