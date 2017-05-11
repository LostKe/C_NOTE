#include "stdio.h"



//写入文件
void storeText(char *filename)
{
    FILE *fp;
    fp=fopen(*filename,"w+");
    fprintf(fp, "this is test for fprintf\n");
    fputs("this is test for fputs \n",fp);
    fclose(fp);
}


//读取文件
void readText(char *filename)
{
  FILE *fp;
  char[255] buffer;
  fp=fopen(*filename,"r");
  fgets(buff,255,fp);
  printf("%s\n", buffer);

}

int main()
{
  //写入文件 test
  char[] filename="/home/test.txt";
  //storeText(&filename);
  readText(&filename);
  return 0;
}
