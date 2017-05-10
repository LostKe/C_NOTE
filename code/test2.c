#include "stdio.h"

/*求数组的平均值 (形式参数是一个指针)*/
void getAvg(*result,*array)
{
  *result=0;
  for(int i;i<sizeof(*array);i++)
  {
    *result=*result+*array[i];
  }

}

int main()
{
  int array[]={1,2,3,4,5,6,7,8,9};
  int result;
  getAvg(&result,&array);
  printf("result=%d\n",result );
}
