/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���һ��nλ��Ȼ���ĸ�λ���ֵĻ�����n ��С��10��
      ��Ȼ����

------------------------------------------------*/

#include "stdio.h"
#include "conio.h"
  
long fun(long n)
{
  /*********Begin**********/
    long mul = 1;
    while (n)
    {
        mul *= (n % 10);
        n /= 10;
    }
    return mul;
  
  
  
  
  
  /**********  End  **********/
  
}

main()   
{
  long  m;
  void TestFunc();
  printf("Enter m: ");
  scanf("%ld", &m);
  printf("\nThe result is %ld\n", fun(m));
  TestFunc();
}   

void TestFunc()
{
  
  FILE *IN,*OUT;
  int c ;
  long t;
  long o;
  
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
  for(c=1;c<=5;c++)
  {
    fscanf(IN,"%ld",&t);
    o=fun(t);
    fprintf(OUT,"%ld\n",o);
  }
  fclose(IN);
  fclose(OUT);
}