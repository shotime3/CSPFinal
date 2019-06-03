#include <stdio.h>
#include <sting.h>

int main(){
	char input1[256], Utimezone[256];
	char input2[256], Wtimezone[256];
	int tz;
	
	printf("What is your timezone? PST, HST, AKST, MST, CDT, or EDT?\n");
	fgets(input1, 256, stdin);
	sscanf(input1, "%s", Utimezone);

	printf("Your timezone is %s. What timezone do you want to see?\n", Utimezone);
	fgets(input2, 256, stdin);
        sscanf(input2, "%s", Wtimezone);

	if (strcmp(Utimezone, Wtimezone) == 0){
		int tz = 0;
	}
}
