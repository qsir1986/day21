#include <stdio.h>
#include <string.h>

int main(void) {
	char buffer[256];
	printf("输入您的姓名:");
	gets(buffer);
	printf("您的名字包含 %d 个字符。\n", strlen(buffer));
	return 0;
}