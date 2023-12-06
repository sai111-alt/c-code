/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目:请编写函数fun，其功能是：计算并输出下列多项式的值：
             1       1               1
    S = 1 + ── + ─── + … + ─────
            1*2    1*2*3         1*2*3*…50
    例如，在主函数中从键盘给n输入50后，输出为：s=1.718282。
    注意：要求n的值大于1但不大于100。
          部分源程序在文件PROG1.C中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除


*/



#include <stdio.h>
double fun(int  n)
{

    /**********  Begin  **********/
    double s = 1.0;
    double t = 1.0;
    int i = 0;
    for (i = 2; i <= n; i++)
    {
        t *= i;
        s += (1.0/t);
    }
    return s;
  
  
  
    /**********   End  ***********/
}
main()
{ int  n;    double  s;
  void NONO( );
  printf("\nInput n:  ");  scanf("%d",&n);
  s=fun(n);
  printf("\n\ns=%f\n\n",s);
  NONO();
}
void NONO()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ; int n, i ; double s ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%lf\n", s) ;
  }
  fclose(rf) ; fclose(wf) ;
}
