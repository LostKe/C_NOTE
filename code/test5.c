/*结构体*/
#include "stdio.h"
#include "string.h"

struct Book{
   char title[50];
   char author[50];
   int  book_id;
}; /*结构体得以;结尾*/

int main()
{
  struct Book nginx;
  struct Book mongoDB;
  /* 设置nginx 信息*/
  strcpy(nginx.title,"NGINX 导读");
  strcpy(nginx.author,"Toms.divide");
  nginx.book_id=1002314;
  /* mongoDB 信息*/
  strcpy(nginx.title,"mongoDB入门与精通");
  strcpy(nginx.author,"Toms.divide");
  nginx.book_id=1009983;

  /*输出 nginx 信息*/
  printf("nginx-title=%s\n",nginx.title );
  printf("nginx-author=%s\n",nginx.author );
  printf("nginx-book_id=%d\n",nginx.book_id );
  return 0;
}
