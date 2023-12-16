/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数求1~100中奇数的平方和。
      结果为166650.000000。

注意：部分源程序给出如下。请勿改动主函数main和其
      它函数中的任何内容，仅在函数sum的花括号中填
      入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除



------------------------------------------------*/

#include <stdio.h>
void  bky(); 

float sum(int n)
{
  /**********Begin**********/
  float i=0.0;
  float c=0.0;
  for(i=1.0;i<100;i+=2)
  {
	  c+=i*i;
  }
  return c;
  
  
  
  
  /**********  End  **********/
}

main()
{
  printf("sum=%f\n",sum(100));
  bky();
}

void bky()
{
  FILE *IN,*OUT;
  int i,j;
  float o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  }
  for(j=0;j<5;j++)
  {
    fscanf(IN,"%d",&i);
    o=sum(i);
    fprintf(OUT,"%f\n",o);
  }
  fclose(IN);
  fclose(OUT);
}