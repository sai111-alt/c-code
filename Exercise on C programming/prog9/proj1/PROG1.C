/*-------------------------------------------------------------------------------------
程序设计:
---------------------------------------------------------------------------------------
请编写一个函数fun，它的功能是：求出1到m之内(含m)能被7或11整除的所有整数放在
数组a中，通过n返回这些数的个数。
    例如，若传送给m的值为50，则程序输出：
    7  11  14  21  22  28  33  35  42  44  49
    请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/

#include <conio.h>
#include <stdio.h>
#include <windows.h>  
#define M 100
void  fun ( int  m, int *a , int *n )
{
     /***********************Begin*********************/
    int i = 0;
    *n = 0;
    for (i=1; i<=m; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            *a++ = i;
            (*n)++;
        }

    }
    /***********************End***********************/


}
void NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n, j, k, aa[M], sum ;

  fp = fopen("bc05.in","r") ;
  if(fp == NULL) {
    printf("数据文件bc05.in不存在!") ;
    return ;
  }
  wf = fopen("bc05.out","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d,", &j) ;
    fun(j, aa, &n) ;
    sum = 0 ;
    for(k = 0 ; k < n ; k++) sum+=aa[k] ;
    fprintf(wf, "%d\n", sum) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}
main( )
{  int aa[M], n, k;
   system("cls");
   fun ( 50, aa, &n );
   for ( k = 0; k < n; k++ )
     if((k+1)%20==0) printf("\n");
     else printf( "%4d", aa[k] );
   printf("\n") ;
   NONO( );
}



