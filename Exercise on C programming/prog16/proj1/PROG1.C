/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����д����fun,�����Ĺ�����:�ж��ַ����Ƿ�Ϊ����?����,��������1��
�����������:YES,���򷵻�0, �����������NO��������ָ˳���͵�����һ����
�ַ�����
    ����,�ַ���LEVEL�ǻ���,���ַ���123312�Ͳ��ǻ��ġ�
*********Begin**********��**********  End  **********����ɾ��


------------------------------------------------*/


void  TestFunc(); 

#include <stdio.h>
#define N 80
int fun(char str[])
{
  /*********Begin**********/
    char* left = str;
    char* right = str;
    while (*right)
    {
        right++;
    }
    right--;
    while (left <= right)
    {
        if (*left != *right)break;
        left++;
        right--;
    }
    if (left > right)return 1;
    else return 0;
  /**********  End  **********/
}

main()
{ char s[N] ;
 printf("Enter a string: ") ; gets(s) ;
 printf("\n\n") ; puts(s) ;
 if(fun(s)) printf(" YES\n") ;
 else       printf(" NO\n") ;
   TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  char i[200];
  int j,k;
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
for(j=0;j<3;j++)
  {fscanf(IN,"%s",i);
  k=fun(i);
  if(k==1)
  fprintf(OUT,"%d\n",1);
  else
     fprintf(OUT,"%d\n",0);}

  fclose(IN);
  fclose(OUT);
}