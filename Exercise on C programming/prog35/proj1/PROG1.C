/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：用函数求一个N阶方阵右下三角元素的和（包括副
      对角线上的元素）。    

*********Begin**********和**********  End  **********不可删除



------------------------------------------------*/

#include "stdlib.h"
#include "stdio.h"
#define N 3

int sum(int a[][N])
{
  /*********Begin**********/
    int i = 0;
    int j = 0;
    int sum = 0;
    for (i = N-1; i >= 0 ; i--)
    {
        for (j = N-i-1; j < N; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
 /**********  End  **********/
}

main()
{
  int a[N][N],i,j;
  void TestFunc();
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      a[i][j]=rand()%10+10;
      printf("%3d",a[i][j]);
    }
    printf("\n");
  }
  printf("===================\n");
  printf("sum=%5d\n",sum(a));
  TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  int m,n;
  int i[3][3];
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
  for(m=0;m<3;m++)
    for(n=0;n<3;n++)
      fscanf(IN,"%d",&i[m][n]);
    o=sum(i);
    fprintf(OUT,"%d\n",o);
    fclose(IN);
    fclose(OUT);
}