/*------------------------------------------------
��������ơ�
--------------------------------------------------

��Ŀ    ��д����fun�������Ĺ����ǣ���s��ָ���ַ�����ɾ���������ַ���ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�������
    ������ִ��ʱ�����ַ���Ϊ��turbo c and borland c++
    �Ӽ����������ַ���n����������Ϊ��turbo c ad borlad c++
    ���������ַ����ַ����в����ڣ����ַ�����ԭ�������
    ע�⣺����Դ�������ļ�PROG1.C�С�
    ����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
*********Begin**********��**********  End  **********����ɾ��

*/



#include <stdio.h>
#include <string.h>

void fun(char s[],char c)
{

    /**********  Begin  **********/
    char* p = s;
    while (*s)
    {
        if (*s != c)
        {
            *p++ = *s++;
        }
        else
        {
            s++;
        }
    }
    *p = '\0';
    /**********   End  ***********/

}


main()
{
  void NONO( );
  static char str[]="turbo c and borland c++";
  char ch;
  printf("ԭʼ�ַ���:%s\n", str);
  printf("����һ���ַ�:");
  scanf("%c",&ch);
  fun(str,ch);
  printf("str[]=%s\n",str);
  NONO();
}

void NONO()
{
 /* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
    ������ݣ��ر��ļ��� */
  FILE *rf, *wf ;
  char s[81], ch, w ;
  int len ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  fgets(s, 80, rf) ;
  fscanf(rf, "%c", &ch) ;
  len = strlen(s) - 1 ;
  w = s[len] ;
  if(w == '\n' || w == 0x1a) s[len] = 0 ;
  fun(s, ch) ;
  fprintf(wf, "%s", s) ;
  fclose(rf) ;
  fclose(wf) ;
}