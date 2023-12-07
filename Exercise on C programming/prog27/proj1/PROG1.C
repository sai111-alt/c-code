/*-------------------------------------------------------------------------------------
程序设计:
---------------------------------------------------------------------------------------
    请编写函数fun，对长度为7个字符的字符串，除首、尾字符外，将其余5个字符按降序排列。例如，
原来的字符串为CEAedca，排序输出为CedcEAa。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
--------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

int fun(char *s,int num)
{
     /***********************Begin*********************/
    int i = 0;
    int temp = 0;
    int c = 0;
    int j = 0;
    for (j = 1; j < num - 2; j++)
    {
        c = j;
        for (i = j; i < num - 1; i++)
        {
            if (s[c] < s[i])c = i;
        }
        temp = s[j];
        s[j] = s[c];
        s[c] = temp;
    }
    /***********************End***********************/


}

NONO( )
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
    输出数据，关闭文件。 */
   char s[10];
   int j;
  FILE *rf, *wf ;
  rf = fopen("b15.in", "r") ;
  wf = fopen("a15.out", "w") ;
  for (j=0;j<4;j++)
 { fscanf(rf,"%s",s);
   fun(s,7);
   fprintf(wf,"%s\n",s);
 }
  fclose(rf) ;
  fclose(wf) ;
}

main()
{
   char s[10];
   system("cls");
   printf("输入7个字符的字符串：");
   gets(s);
   fun(s,7);
   printf("\n%s",s);
   NONO();
}

