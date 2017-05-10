#include "stdio.h"
//输入输出
int main()
{
	char str[100];
	printf("enter a value:");
	fgets(str,100,stdin);
	printf("\n you entered:");
	fputs(str,stdout);
	//puts(str);
	return 0;
}
