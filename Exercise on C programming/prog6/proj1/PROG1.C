/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：产生20个[30,120]上的随机整数放入二维数组a[5][4]
      中，求每行元素的和。

------------------------------------------------*/

#include "stdlib.h"
#include "stdio.h"

void row_sum(int a[5][4],int b[5])
{
  /*********Begin**********/
    int i = 0;
    int sum = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
        b[i] = sum;
        sum = 0;
    }
  /**********  End  **********/
}

main()
{
  void row_sum();
  int a[5][4],b[5],i,j;
  void TestFunc();
  for(i=0;i<5;i++)
    for(j=0;j<4;j++)
      a[i][j]=rand()%90+30;
    for(i=0;i<5;i++)
    {
      for(j=0;j<4;j++)
        printf("%5d",a[i][j]);
      printf("\n");
    }
    row_sum(a,b);
    for(i=0;i<5;i++)
      printf("%6d",b[i]);
    printf("\n");
    TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  int m,n;
  int i[5][4];
  int o[5];
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
  for(m=0;m<5;m++)
    for(n=0;n<4;n++)
      fscanf(IN,"%d",&i[m][n]);
    row_sum(i,o);
    for(n=0;n<5;n++)
      fprintf(OUT,"%d\n",o[n]);
    fclose(IN);
    fclose(OUT);
}
