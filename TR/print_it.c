/* Print_it.c
* This program prints a listing with line number. 
*/
#include <stdio.h>
#include <stdlib.h>

void do_heading(char *fileName);

int line = 0, page = 0;

int main(int argv, char *argc[]) {
	char buff[256];
	FILE *fp;
	// 判断参数个数是否正确
	if (argv < 2) {
		fprintf(stderr, "\n\nProper Usage is: ");
		fprintf(stderr, "Print_it filename.ext\n");
		return 1;
	}
	// 判断文件是否存在
	if ((fp = fopen(argc[1], "r")) == NULL) {
		fprintf(stderr, "Error Opening file %s", argc[1]);
		return 1;
	}
	
	page = 0;
	line = 1;
	do_heading(argc[1]);
	
	while(fgets(buff, 256, fp) != NULL) {
		if (line % 55 == 0) 
			do_heading(argc[1]);
		fprintf(stdout, "%4d: \t %s", line++, buff);
	}
	fprintf(stdout, "\f");
	fclose(fp);
	return 0;
}

void do_heading(char *fileName) {
	int i;
	page++;
	if (page > 1)
	    fprintf(stdout, "\f");
	fprintf(stdout,  "Page:%d \t %s\n\n", page, fileName);
}