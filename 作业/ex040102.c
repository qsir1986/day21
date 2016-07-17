#include <stdio.h>

int main (void) {
	int x, y; // 习题中没有声明变量
	printf("Enter Two number : ");
	scanf("%d,%d", &x, &y);
	printf("%d is bigger!\n", (x>y) ? x : y);
	return 0;
}