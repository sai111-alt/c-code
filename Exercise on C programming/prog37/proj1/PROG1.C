/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写程序打印如图1所示图形。

  
*******      
 *****
  ***
   *


注意：部分源程序给出如下。请勿改动主函数main和其
      它函数中的任何内容，仅在函数fun的花括号中填
      入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除



------------------------------------------------*/

#include <stdio.h>

void  TestFunc(); 

void fun()
{
  int m,n;
  /*********Begin**********/
  int i = 0;
  int j = 0;
  m = 7;
  for (j = 0; j < 4; j++)
  {
      for (n = j; n > 0; n--)
      {
          printf(" ");
      }
      for (i = m-2*j; i > 0; i--)
      {
          printf("*");
      }
      printf("\n");
  }
/**********  End  **********/
  
}

main( )
{ 
  fun();
 TestFunc();
}
void TestFunc()
{
  FILE *IN,*OUT;
  int i;
  char sin[80];
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<5;i++)
  { 
    a=0;
    num=0;
    b=0;
    other=0;       
    fscanf(IN,"%s",&sin);
    count(sin);
    fprintf(OUT,"%d\n",a);
    fprintf(OUT,"%d\n",num);
    fprintf(OUT,"%d\n",b);
    fprintf(OUT,"%d\n",other);  
  }
  
  fclose(IN);
  fclose(OUT);
}