/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写函数sub(int m,int n)功能是：找出m～n之间
	(包括m和n)各位数字之和能被7整除的数，将这些
	数的个数作为函数的返回值： 
------------------------------------------------*/

#include "stdio.h"

int sub(int m,int n)
{
  /*********Begin**********/
	int a=0;
	int count =0;
	int b=0;
	int c=0;
	int d=0;
	int sum=0;
	for(a=m;a<=n;a++)
	{
	b=a%10;
	c=a/10%10;
	d=a/100;
	sum=d+c+b;
	if(sum%7==0)
		count++;
	}
	return count;
  
  
  
  
  /**********  End  **********/
}

main()
{

  void TestFunc();
  int m,n;
  m=100;n=200;
  printf("满足条件的个数：%d\n",sub(m,n));
  TestFunc();
 
}

void TestFunc()
{
  FILE *IN,*OUT;
  int i,m,n;
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
    fscanf(IN,"%d%d",&m,&n);
    fprintf(OUT,"%d\n",sub(m,n));
  }
  fclose(IN);
  fclose(OUT);
}
