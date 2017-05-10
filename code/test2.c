#include "stdio.h"
#define GET_ARRAY_LEN(array,len){len=(sizeof(array)/sizeof(array[0]));}
/*求数组的平均值 (形式参数是一个指针)*/
void getAvg(int *result,int *array,int length)
{
  *result=0;
  int i=0;
  for(i;i<length;i++)
  {
   *result=*result+array[i];
  }
  return ;

}

int main()
{
  int array[]={1,2,3,4,5,6,7,8,9};
  int result;
  int len;
  GET_ARRAY_LEN(array,len);
  getAvg(&result,array,len);
  printf("result=%d\n",result );
  return 0;
}
