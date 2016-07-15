#include <stdio.h>

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

int main(void) {
	unsigned seconds, minutes, hours, secs_left, mins_left;
	
	printf("Enter number of seconds(<65000)");
	scanf("%d", &seconds);
	
	hours = seconds / SECS_PER_HOUR;
	minutes = seconds / SECS_PER_MIN;
	mins_left = minutes % SECS_PER_MIN;
	secs_left = hours % SECS_PER_MIN;
	
	printf("%u h, %u m, and %u s\n", hours, mins_left, secs_left);
	return 0;
}