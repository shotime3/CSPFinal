#include <stdio.h>
#include <time.h>
#include <string.h>
#include "code.h"
#include <unistd.h>
#include <stdlib.h>

int DisplayTime(int argc, char* argv[]){
// variables to store date and time components
	int hours, minutes, seconds, day, month, year;
        // time_t is arithmetic time type
        time_t now;
        // Obtain current time
        // time() returns the current time of the system as a time_t value
        time(&now);
        // Convert to local time format and print to stdout
//        printf("Today is : %s", ctime(&now));
        // localtime converts a time_t value to calendar time and 
        // returns a pointer to a tm structure with its members 
        // filled with the corresponding values
        struct tm *local = localtime(&now);

	time_t t = time(NULL);
	struct tm lt = {0};
	localtime_r(&t, &lt);

	if (strcmp(argv[1], lt.tm_zone) != 0){
		printf("Stop lying. Your time zone is '%s', not %s.\n", lt.tm_zone, argv[1]);
		exit(0);
	}
//	while (strcmp(argv[1], lt.tm_zone) != 0){
//		sleep(1);
//	}
	if (strcmp(argv[1], argv[2]) == 0){
		hours = local->tm_hour;             // get hours since midnight (0-23)
		minutes = local->tm_min;            // get minutes passed after the hour (0-59)
		seconds = local->tm_sec;            // get seconds passed after minute (0-59)
		day = local->tm_mday;               // get day of month (1 to 31)
		month = local->tm_mon + 1;          // get month of year (0 to 11)
		year = local->tm_year + 1900;       // get year since 1900
		//time_t rawtime;
		//struct tm * timeinfo;
		//time ( &rawtime );
		//timeinfo = localtime ( &rawtime );
		//printf ( "Current local time and date in %s: %s", argv[2], asctime (timeinfo) );
		 if (hours < 12) // before midday
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);

        else    // after midday
                printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        // print current date
        printf("Date is : %02d/%02d/%d\n", day, month, year);

	}
	else if (argv[1] == "PST" && argv[2] == "HST"){
	printf("Date is : %02d/%02d/%d\n", day, month, year);
	}
	return 0;
}
