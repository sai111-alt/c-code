/*------------------------------------------------
【程序设计】
--------------------------------------------------
/*    请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换成大写（若该位置上不是字母，则不转换）。
    例如，若输入"abc4EFG"，则应输出"aBc4EFG"。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除
*/



#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<windows.h>
void fun(char *ss)
{

    /**********  Begin  **********/
	int i=0;
	for(i=1;i<strlen(ss);i+=2)
	{
		if(ss[i]>='a'&& ss[i]<='z')
			ss[i]-=32;
	}
  
  
  
  
    /**********   End  ***********/
}


void NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  char tt[81] ;
  int i ;

  fp = fopen("bc07.in","r") ;
  if(fp == NULL) {
    printf("数据文件bc07.in不存在!") ;
  }
  wf = fopen("bc07.out","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%s", tt) ;
    fun( tt ) ;
    fprintf(wf, "%s\n", tt) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}

main()
{  char tt[81];
   system("cls");
   printf("\nPlease enter an string within 80 characters:\n");gets(tt);
   printf("\n\nAfter changing,the string\n  \"%s\"",tt);
   fun(tt);
   printf("\nbecomes\n  \"%s\"\n",tt);
  NONO ( );
}
