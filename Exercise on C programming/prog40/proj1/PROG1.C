/*------------------------------------------------
��������ơ�
--------------------------------------------------

��Ŀ����д������1~100��������ƽ���͡�
      ���Ϊ166650.000000��

ע�⣺����Դ����������¡�����Ķ�������main����
      �������е��κ����ݣ����ں���sum�Ļ���������
      ������д��������䡣
*********Begin**********��**********  End  **********����ɾ��



------------------------------------------------*/

#include <stdio.h>
void  bky(); 

float sum(int n)
{
  /**********Begin**********/
  float i=0.0;
  float c=0.0;
  for(i=1.0;i<100;i+=2)
  {
	  c+=i*i;
  }
  return c;
  
  
  
  
  /**********  End  **********/
}

main()
{
  printf("sum=%f\n",sum(100));
  bky();
}

void bky()
{
  FILE *IN,*OUT;
  int i,j;
  float o;
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
  for(j=0;j<5;j++)
  {
    fscanf(IN,"%d",&i);
    o=sum(i);
    fprintf(OUT,"%f\n",o);
  }
  fclose(IN);
  fclose(OUT);
}