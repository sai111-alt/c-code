/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：根据整型形参m，计算如下公式的值：y=1/2＋1/4＋
      1/6＋...＋1/2m 。
例如：若m=9，则应输出：1.414484
*********Begin**********和**********  End  **********不可删除




------------------------------------------------*/

#include <stdio.h>
void  bky(); 
  
double fun(int m)   
{
  /**********Begin**********/
    double sum = 0.0;
    for (; m; m--)
    {
        sum += 1.0 / (2*m);
    }
    return sum;
  
  
  
  /**********  End  **********/
}

main()   
{
  int n;   
  printf("Enter n: ");   
  scanf("%d", &n);   
  printf("\nThe result is %1f\n", fun(n));
  bky();  
}   

void bky()
{
  FILE *IN,*OUT;
  int i ;
  int t;
  double o;
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
  for(i=0;i<5;i++)
  {   
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%f\n",o);
    
  }
  fclose(IN);
  fclose(OUT);
}