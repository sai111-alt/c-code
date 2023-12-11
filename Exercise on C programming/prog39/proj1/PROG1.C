/*------------------------------------------------
【程序设计】
--------------------------------------------------
/*    请编写一个函数，用来删除字符串中的所有空格。
    例如，输入"asd af aa z67"， 则输出为 "asdafaaz67"。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其它函数中的任何内容， 仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除

*/


#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
void fun(char *str)
{


    /**********  Begin  **********/
	char* p=str;
	char* q=str;
	while(*p)
	{
		if(*p!=' ')
		{
			*q++=*p++;
		}
		else
		{
			p++;
		}
	}
	*q=0;
	/**********   End  ***********/


}

NONO()
{
/* 请在此函数内打开文件，输入调试数据，调用 fun 函数，
   输出数据，关闭文件。 */
char str[81];
  int n = 0;
  FILE *rf, *wf ;
    int i;
  rf = fopen("b0803.in", "r") ;
  wf = fopen("b0803.out", "w") ;
  while(n < 10) {
    fgets(str, 80, rf);
    for(i=0;*(str+i);i++);
    fun(str);
    fprintf(wf, "%s", str) ;
    n++ ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

main()
{
  char str[81];
  system("cls");
  printf("Input a string:") ;
  gets(str);
  puts(str);
  fun(str);
  printf("*** str: %s\n",str);
  NONO();
}