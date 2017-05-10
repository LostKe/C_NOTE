#include "stdio.h"
#include "string.h"

int main()
{
	char str[]="abcd";
	char str1[]="-end";
	char strTemp[80];
	memset(strTemp,0,strlen(strTemp));
	strcpy(strTemp,str1);
	strcat(str,str1);
	printf("str len=%d\n",strlen(str));
	printf("str[4]=%c \n",str[4]);
	printf("str:%s\n",str);
	printf("strTemp:%s\n",strTemp);
}
