/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���д����fun�书���ǣ����������β�m����������
      ��ʽ��ֵ��y=1��1/3��1/5��1/7��...��1/(2m+1)
���磺��m=9����Ӧ�����2.133256

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