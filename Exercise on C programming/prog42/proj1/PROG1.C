/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���д����sub(int m,int n)�����ǣ��ҳ�m��n֮��
	(����m��n)��λ����֮���ܱ�7��������������Щ
	���ĸ�����Ϊ�����ķ���ֵ�� 
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
  printf("���������ĸ�����%d\n",sub(m,n));
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