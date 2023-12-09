/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目    编写函数fun，函数的功能是：从s所指的字符串中删除给定的字符。同一字母的大、小写按不同字符处理。
    若程序执行时输入字符串为：turbo c and borland c++
    从键盘上输入字符：n，则输出后变为：turbo c ad borlad c++
    如果输入的字符在字符串中不存在，则字符串照原样输出。
    注意：部分源程序在文件PROG1.C中。
    请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除

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
  printf("原始字符串:%s\n", str);
  printf("输入一个字符:");
  scanf("%c",&ch);
  fun(str,ch);
  printf("str[]=%s\n",str);
  NONO();
}

void NONO()
{
 /* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
    输出数据，关闭文件。 */
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
