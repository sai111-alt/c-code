/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：用函数实现字符串的复制, 不允许用strcpy()函数。

------------------------------------------------*/

#include "stdio.h"

void copy(char str1[],char str2[])
{
  /*********Begin**********/
    while (*str2++ = *str1++)
    {
        ;
    }
  /**********  End  **********/
}

main()
{
  void copy();
  char c1[40],c2[40];
  void TestFunc();
  gets(c1);
  copy(c1,c2);
  puts(c2);
  TestFunc();
  
}


void TestFunc()
{
  FILE *IN,*OUT;
  char i[100];
  char o[100];
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read File Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write File Error");
  }
  fscanf(IN,"%s",i);
  copy(i,o);
  fprintf(OUT,"%s\n",o);
  fclose(IN);
  fclose(OUT);
}