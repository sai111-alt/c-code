/*------------------------------------------------
��������ơ�
--------------------------------------------------

��Ŀ����һ��nλ��Ȼ���ĸ�λ���ֵĻ�����n ��С��10��
      ��Ȼ����

*********Begin**********��**********  End  **********����ɾ��


------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  bky(); 
  
long fun(long n)
{
  /**********Begin**********/
    int sum = 1;
    while (n)
    {
        sum *= n % 10;
        n /= 10;
    }
    return sum;
  /**********  End  **********/
  
}

main()   
{
  long  m;
  printf("Enter m: ");
  scanf("%ld", &m);
  printf("\nThe result is %ld\n", fun(m));
  bky();
}   

void bky()
{
  
  FILE *IN,*OUT;
  int c ;
  long t;
  long o;
  
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
  for(c=1;c<=5;c++)
  {
    fscanf(IN,"%ld",&t);
    o=fun(t);
    fprintf(OUT,"%ld\n",o);
  }
  fclose(IN);
  fclose(OUT);
}