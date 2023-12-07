/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写函数fun其功能是：根据整型形参m，计算如下
      公式的值：y=1＋1/3＋1/5＋1/7＋...＋1/(2m+1)
例如：若m=9，则应输出：2.133256

------------------------------------------------*/

#include "stdio.h"
    
double fun(int m)   
{
  /*********Begin**********/
    int i = 0;
    double y = 1.0;
    for (i = 3; i <= (2 * m + 1); i += 2)
    {
        y += 1.0 / i;
    }
    return y;
  
  
  
  
  /**********  End  **********/
}

main()   
{
  int n;   
  void TestFunc();
  printf("Enter n: ");   
  scanf("%d", &n);   
  printf("\nThe result is %1f\n", fun(n));
  TestFunc();  
  
}   

void TestFunc()
{
  FILE *IN,*OUT;
  int i ;
  int t;
  double o;
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
  for(i=0;i<5;i++)
  {   
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%lf\n",o);
  }
  fclose(IN);
  fclose(OUT);
}