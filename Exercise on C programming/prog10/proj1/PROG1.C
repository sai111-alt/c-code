/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从键盘输入一个大于3的整数，调用函数fun判断其
      是否素数，然后在main函数中输出相应的结论信息。
例如：素数是仅能被1和自身整除的数。7是素数，8不是素数。请编写fun函数。
-------------------------------------------------*/

#include "stdio.h"
    
int fun(int n)
{
  
  /*********Begin**********/
    int flag = 0;
    int i = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            return flag;
        }
        else
        {
            flag = 1;
            return flag;
        }
    }
  /**********  End  **********/
}
void TestFunc()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("5.in","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..It May Be Changed");
  }
  OUT=fopen("5.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. It May Be Changed");
  }
  for(i=0;i<10;i++)        
  {        
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
main()
{
  int m,flag;
  printf("input an integer:");
  scanf("%d",&m);
  flag=fun(m);
  if(flag)
    printf("%d is a prime.\n",m);
  else
    printf("%d is not a prime.\n",m);
  TestFunc();
}