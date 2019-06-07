#include <stdio.h>
#include <string.h>
#include <time.h>
#include "code.h"

int main(int argc, char* argv[]){
	//char input1[256];
	//char Utimezone[256];
	//char input2[256];
	//char Wtimezone[256];
	//int tz;
	if (argc <  3) {
		//printf("What is your timezone? PST, HST, AKST, MST, CDT, or EDT?\n");
		//fgets(input1, 256, stdin);
		//sscanf(input1, "%s", Utimezone);

		//printf("Your timezone is %s. What timezone do you want to see?\n", Utimezone);
		//fgets(input2, 256, stdin);
        	//sscanf(input2, "%s", Wtimezone);

		//if (strcmp(Utimezone, Wtimezone) == 0){
		//	int tz = 0;
		//}
		printf("Please enter a your timezone and your requested timezone");
	}
	else {
		//fgets(input1, 256, stdin);
                //sscanf(input1, "%s", Utimezone);
		printf("Your timezone is %s. Your requested timezone is %s.\n", argv[1], argv[2]);
		DisplayTime(argc, argv);
		return 0;
  		}
}
