/*------------------------------------------------
【程序设计】
--------------------------------------------------
/*    函数fun的功能是：将s所指字符串除了下标为偶数、同时ASCII值也为偶数的字符外，
其余的全部删除；串中剩余字符所形成的一个新串放在t所指的数组中。
    例如，若s所指字符串中的内容为："ABCDEFG123456"，其中字符B的ASCII码值为偶数，
但在数组中的下标为奇数，因此也应当删除；而字符2的ASCII码值为偶数，所在数组中的下标也为偶数，
因此不应当删除，其他依此类推。最后t所指的数组中的内容应是："246"。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除
*/


#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<windows.h>
void fun(char *s,char t[])
{

    /**********  Begin  **********/
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] % 2 == 0 && i % 2 == 0)
        {
            *t++ = s[i];
        }
        else continue;
    }
    *t = '\0';
    /**********   End  ***********/
}

NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  char s[100], t[100] ;
  FILE *rf, *wf ;
  int i ;

  rf = fopen("bc09.dat", "r") ;
  wf = fopen("bc09.out", "w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s) ;
    fun(s, t) ;
    fprintf(wf, "%s\n", t) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

main()
{
   char s[100],t[100];
   system("cls");
   printf("\nPlease enter string S:"); scanf("%s", s);
  fun(s, t);
  printf("\nThe result is: %s\n", t);
  NONO();
}


