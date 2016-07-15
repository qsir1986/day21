#include <stdio.h>

int main (void) {
	int x, y;
	
	printf("请输入第一个值: ");
	scanf("%d", &x);
	printf("请输入第二个值: ");
	scanf("%d", &y);
	
	if (x == y) {
		printf("两个值相等\n");
	} else if (x > y) {
		printf("第一个值大\n");
	} else {
		printf("第二个值大\n");
	}
	return 0;
}