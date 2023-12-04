/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目: 请编写一个函数void fun(int m,int k,int xx[])，该函数的功能是：将大于整数m且紧靠m的k个素数存入xx所指的数组中。
    例如，若输入17，5，则应输出：19，23，29，31，37。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除


*/




#include <conio.h>
#include <stdio.h>
#include<windows.h>
void fun(int m,int k,int xx[])
{

    /**********  Begin  **********/
    int i = 0;
    for (i = m + 1; k; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            *xx++ = j;
            k--;
        }
    }
    /**********   End  ***********/
}


NONO ( )
{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
  int m, n, zz[1000], i ;
  FILE *rf, *wf ;

  rf = fopen("bc08.in", "r") ;
  wf = fopen("bc08.out", "w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d %d", &m, &n) ;
    fun(m, n, zz) ;
    for( m = 0 ; m < n ; m++ ) fprintf(wf, "%d ", zz[m]) ;
    fprintf(wf, "\n") ;
  }
  fclose(rf) ;
  fclose(wf) ;
}


main()
{
    int m,n,zz[1000];
    system("cls");
    printf("\nPlease enter two integers:");
    scanf("%d%d",&m,&n);
    fun(m,n,zz);
    for(m=0;m<n;m++)
        printf("%d ",zz[m]);
    printf("\n");
   NONO( ) ;
}

