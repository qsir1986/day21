/*Demonstrates variables and constants */
#include <stdio.h>
/*define a constant to convert from pounds to grams */
#define GRAMS_PRO_POUND 454
/*define the constant for the start of the next century */
const int TARGET_YEAR = 2016;
/* declare the needed variables */
long weightInGarms, weightInPound;
int yearOfBirth, ageIn2016;

int main(void) {
	// input data from user
	printf("Enter your weight in pound :");
	scanf("%d", &weightInPound);
	printf("Enter your year of birth:");
	scanf("%d", &yearOfBirth);
	/*perfrom conversions */
	weightInGarms = weightInPound * GRAMS_PRO_POUND;
	ageIn2016 = TARGET_YEAR - yearOfBirth;
	/* Desplay results on the sceen */
	printf("\nYour weight in grams: %ld ", weightInGarms);
	printf("\nIn 2016 you will be %d year old.\n", ageIn2016);
	
	return 0;
}