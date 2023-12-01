/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数判断一个整数m的各位数字之和能否被7整除，
      可以被7整除则返回1，否则返回0。调用该函数找出
      100~200之间满足条件的所有数。
*********Begin**********和**********  End  **********不可删除




------------------------------------------------*/

#include "stdio.h"

int sub(int m)
{
  /*********Begin**********/
    int sum = 0;
    while (m)
    {
        sum += m%10;
        m = m / 10;
    }
    if (sum % 7 == 0)
        return 1;
    else
        return 0;
  
  
  
  
  
  /**********  End  **********/
}
main()
{
  int i;
  void TestFunc();
  for(i=100;i<=200;i++)
    if(sub(i)==1)
      printf("%4d",i);
  TestFunc();
 
}

void TestFunc()
{
  FILE *IN,*OUT;
  int n;
  int i[10];
  int o;
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
  for(n=0;n<10;n++)
  {    
    fscanf(IN,"%d",&i[n]);
  }
  for(n=0;n<10;n++)
  {
    o=sub(i[n]);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}