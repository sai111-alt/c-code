/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���һ������С��ƽ��ֵ�����ĸ�����

*********Begin**********��**********  End  **********����ɾ��



------------------------------------------------*/

#include "stdio.h"

int average_num(int a[],int n)
{
  /*********Begin**********/
  int sum=0;
  int i=0;
  int count =0;
  for(i=0;i<n;i++)
  {
	  sum+=a[i];
  }
  sum/=n;
  for(i=0;i<n;i++)
  {
	  if(a[i]<sum)count++;
  }
  return count;
  
  
  
  /**********  End  **********/
}

main()
{
  int n,a[100],i,num;
  void TestFunc();
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  num=average_num(a,n);
  printf("the num is:%d\n",num);
  TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  int n;
  int i[10];
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
  for(n=0;n<5;n++)
  {    
    fscanf(IN,"%d",&i[n]);
  }
  o=average_num(i,5);
  fprintf(OUT,"%d\n",o);
  fclose(IN);
  fclose(OUT);
}