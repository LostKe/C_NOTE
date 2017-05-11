#include "stdio.h"

int main()
{
  FILE *fp;
  fp=fopen("/home/test.txt","w+");
  fprintf(fp, "this is test for fprintf\n");
  fputs("this is test for fputs \n",fp);
  fclose(fp);
  return 0;
}
