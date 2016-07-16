#include <stdio.h>
// true = 1, false = 0
int main(void) {
	int a;
	
	a = (5 == 5);
	printf("a=(5 == 5) a = %d\n", a);
	a = (5 != 5);
	printf("a=(5 != 5) a = %d\n",  a);
	
	a = (12 == 12) + (5 != 1);
	printf("a = (12 == 12) + (5 != 1) a = %d\n", a);
	return 0;
}