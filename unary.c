/* Demonstrates unary operater prefix and postfix modes */
#include <stdio.h>

int main(void) {
	int a, b;
	a = b = 5;
	printf("%d, %d\n", a--, --b);
	printf("%d, %d\n", a--, --b);
	printf("%d, %d\n", a--, --b);
	printf("%d, %d\n", a--, --b);
	printf("%d, %d\n", a--, --b);
	printf("%d, %d\n", a--, --b);
	return 0;
}