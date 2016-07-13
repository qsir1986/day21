#include <stdio.h>

void display_it(void);

int main(void) {
	display_it();
	printf("\n21天学通c语言！\n");
	display_it();
	return 0;
}

void display_it(void) {
	int count;
	for(count=0; count<30; count++)
		printf("*");
}