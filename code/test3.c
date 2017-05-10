#include "stdio.h"

int main()
{
	int *p=NULL;
	printf("p=%x \n",p);
	if(p)
	{
	   printf("p is true \n");
	}else{
	   printf("p is false \n");
	}
	return 0;
}
