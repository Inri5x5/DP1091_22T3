#include <stdio.h>

// this main determines if a student is in high school given their current year.
int main(void) { 
	int start_year = 20; 
	int end_year = 12; 
	int input_year = 20;
	printf("What year are you in? ");
	scanf("%d", &input_year);
	if (input_year >= start_year) && (input_year <= end_year){
		printf("You are in high school\n");
	}
	else if ( input_year < start_year || input_year > end_year) {
		printf("You are not in high school\n");
	}
	return 0;
}