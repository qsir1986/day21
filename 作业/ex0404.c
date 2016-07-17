#include <stdio.h>

int main(void) {
	int x = 0, y = 0;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x > 0 && x < 20) y = x;
	printf("y = %d\n", y);
	return 0;
}