#include <stdio.h>

int main(void) {
	int x, y;
	
	printf("输入x的值: ");
	scanf("%d", &x);
	printf("输入y的值: ");
	scanf("%d", &y);
	
	if (x == y) {
		printf("这两个值相等\n");
	}
	if (x > y) {
		printf("第一个输入的数大\n");
	}
	if (x < y) {
		printf("第二个输入的数大\n");
	}
	return 0;
}