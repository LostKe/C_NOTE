#include <stdio.h>

void sum(int x,int y,int *sum)
{
        *sum=x+y;
        return;
}
int main()
{
        int result;
        /*传入变量result的地址*/
        sum(9,10,&result);
        printf("result=%d \n");
        return 0;
}
