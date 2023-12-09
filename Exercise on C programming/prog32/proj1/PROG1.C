/*------------------------------------------------
【程序设计】
--------------------------------------------------
/*    请编写一个函数fun，它的功能是：计算n门课程的平均分，计算结果作为函数值返回。
    例如：若有5门课程的成绩是：90.5,72,80,61.5,55，则函数的值为：71.80。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除
*/


#include <stdio.h>
float fun(float *a,int n)
{

    /**********  Begin  **********/
    int i = 0;
    float sum = 0.0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
    /**********   End  ***********/

}
void NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, j ;
  float aver, score[5] ;

  fp = fopen("bc01.in","r") ;
  if(fp == NULL) {
    printf("数据文件bc01.in不存在!") ;
    return ;
  }
  wf = fopen("bc01.out","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j = 0 ; j < 5 ; j++) fscanf(fp,"%f,",&score[j]) ;
    aver = fun(score, 5) ;
    fprintf(wf, "%5.2f\n", aver) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}
main() 
{  float score[30]={90.5,72,80,61.5,55},aver;
   aver=fun(score,5);
   printf("\nAverage score is: %5.2f\n",aver); 
   NONO ( );
}

