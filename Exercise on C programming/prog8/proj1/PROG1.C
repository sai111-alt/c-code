/*------------------------------------------------
��������ơ�
--------------------------------------------------

��Ŀ����д�����ж�һ������m�ĸ�λ����֮���ܷ�7������
      ���Ա�7�����򷵻�1�����򷵻�0�����øú����ҳ�
      100~200֮��������������������
*********Begin**********��**********  End  **********����ɾ��




------------------------------------------------*/

#include "stdio.h"

int sub(int m)
{
  /*********Begin**********/
    int sum = 0;
    while (m)
    {
        sum += m%10;
        m = m / 10;
    }
    if (sum % 7 == 0)
        return 1;
    else
        return 0;
  
  
  
  
  
  /**********  End  **********/
}
main()
{
  int i;
  void TestFunc();
  for(i=100;i<=200;i++)
    if(sub(i)==1)
      printf("%4d",i);
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
  for(n=0;n<10;n++)
  {    
    fscanf(IN,"%d",&i[n]);
  }
  for(n=0;n<10;n++)
  {
    o=sub(i[n]);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}