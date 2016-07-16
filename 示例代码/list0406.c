#include <stdio.h>

int main(void) {
	int a = 5, b = 6, c = 5, d = 1;
	int x = 0;
	x = a<b || a<c && c<d;
	// a < c = 0 false
	// c < d = 0 false
	// a < c && c < d = 0 && 0 = 0 false
	// a < b = 1 true
	// a < b || 0 = 1 true
	printf("x == ?1 : %d\n", x);
	
	x = (a<b || a<c) && c<d;
	// (a<b || a<c) = 1 true
	// 1 && c<d = 1 && 0 = 0 false
	printf("x == ?0 : %d\n", x);
	return 0;
}