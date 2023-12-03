/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求给定正整数m以内的素数之和。例如：当m=20时，函数值为77。

------------------------------------------------*/

#include "stdio.h"
    
int fun(int m)
{
  
  /*********Begin**********/
    int i = 0;
    int j = 0;
    int flag = 0;
    int sum = 0;
    for (j = 2; j <= m; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }

        }
        if (flag == 0)
        {
            sum += j;
        }
        flag = 0;
    }
    return sum;
  /**********  End  **********/
  
}

main()
{
  int y;
  void TestFunc();
  y=fun(20);
  printf("y=%d\n",y);
  TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..It May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. It May Be Changed");
  }
  for(i=0;i<5;i++)
  {  
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}