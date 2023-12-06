/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：fun函数的功能是，判断一个整数w的各位数字平方之和能否被5整除，
      可以被5整除则返回1，否则返回0。
*********Begin**********和**********  End  **********不可删除




------------------------------------------------*/

#include "stdio.h"
#include"conio.h"
  
int fun(int w)
{
  /**********Begin**********/
    int t = 0;
    int sum = 0;
    while (w)
    {
        t = w % 10;
        sum += t * t;
        w /= 10;
    }
    if (sum % 5 == 0)
        return 1;
    else
        return 0;
  
  
  
  
  
  /**********  End  **********/
  
}
void yzj();
main()   
{
  int m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %d\n", fun(m));
  yzj();
}

void yzj()
{
  FILE *IN,*OUT;
  int c ;
  int t;
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
  } for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}