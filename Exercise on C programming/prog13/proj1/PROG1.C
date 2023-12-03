/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：求给定正整数n以内的素数之积。（n<28）。
*********Begin**********和**********  End  **********不可删除


------------------------------------------------*/

#include "stdio.h"
#include"conio.h"
void TestFunc();
  
long fun(int n)
{
  /**********Begin**********/
    long i = 0;
    long j = 0;
    long mul = 1;
    for (j = 2; j <= n; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            mul *= j;
        }
    }
    return mul;
  /**********  End  **********/
  
}

void main()   
{
  int  m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %ld\n", fun(m));
  TestFunc();
}   

void TestFunc()
{
  FILE *IN,*OUT;
  int c ;
  int t;
  long o;
  
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
  for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%ld\n",o);
  }
  fclose(IN);
  fclose(OUT);
}