#include "stdio.h"
/*没有提供 直接获取数组长度的函数，对于存放字符串的字符数组提供了一个strlen函数获取长度，其他类型一般定义如下宏来获取*/
#define GET_ARRAY_LEN(array,len){len=(sizeof(array)/sizeof(array[0]));}
/*求数组的平均值 (形式参数是一个指针)*/
void getAvg(int *result,int *array,int length)
{
  /*
  *   写 result  表示指针地址
  *   写 *result 表示指针所访问的值
  *    × *array[i] 是错误的 
  */
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
