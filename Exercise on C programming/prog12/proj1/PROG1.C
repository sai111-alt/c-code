/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：用函数将第2个串连接到第1个串之后，不允许使用
      strcat函数。    

------------------------------------------------*/

#include "stdio.h"
    
void len_cat(char c1[],char c2[])
{
  /*********Begin**********/
    while (*c1++)
    {
        ;
    }
    c1--;
    while (*c1++ = *c2++)
    {
        ;
    }
  
  
  
  
  
  /**********  End  **********/
}

main()
{
  char s1[80],s2[40];
  void TestFunc();
  gets(s1);gets(s2);
  len_cat(s1,s2);
  printf("string is: %s\n",s1);
  TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  int m,n;
  int i[2][200];
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
  for(n=0;n<2;n++)
    fscanf(IN,"%s",i[n]);
  len_cat(i[0],i[1]);
  fprintf(OUT,"%s\n",i[0]);
  fclose(IN);
  fclose(OUT);
}