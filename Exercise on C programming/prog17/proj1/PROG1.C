/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：求一个n位自然数的各位数字的积。（n 是小于10的
      自然数）

*********Begin**********和**********  End  **********不可删除


------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  bky(); 
  
long fun(long n)
{
  /**********Begin**********/
    int sum = 1;
    while (n)
    {
        sum *= n % 10;
        n /= 10;
    }
    return sum;
  /**********  End  **********/
  
}

main()   
{
  long  m;
  printf("Enter m: ");
  scanf("%ld", &m);
  printf("\nThe result is %ld\n", fun(m));
  bky();
}   

void bky()
{
  
  FILE *IN,*OUT;
  int c ;
  long t;
  long o;
  
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
  for(c=1;c<=5;c++)
  {
    fscanf(IN,"%ld",&t);
    o=fun(t);
    fprintf(OUT,"%ld\n",o);
  }
  fclose(IN);
  fclose(OUT);
}