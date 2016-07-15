#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int MAX = sizeof(int) * 8;
	unsigned int in = 15;
	char bits[MAX] ;
	int conut = MAX - 1;
	int i;
	for (i=0; i<MAX; i++) {
		bits[i] = '0';
	}
	for (i=0; i<MAX; i++) {
		//printf("%d\n", in);
		if (in == 0) break;
		bits[conut--] = in % 2 + 48;
		in /= 2;
	}
	
	printf("%s\n", bits);
}