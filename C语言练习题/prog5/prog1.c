#include <stdio.h> 
#define N 11
double fun( int xx[], int *yy )
{
    int i = 0;
    double ave = 0;
    double a1 = 0;
    double a2 = 0;
    int c1 = 0;//放奇数
    int c2 = 0;//放偶数
    for(i=0;i<N;i++)
    {
        if (*xx % 2 == 0)
        {
            c2++;
            a2 += *xx;
        }
        else
        {
            c1++;
            a1 += *xx;
        }
        xx++;
    }
    if (c1 > c2)
    {
        *yy = c1;
        ave = a1/c1;
    }
    else
    {
        *yy = c2;
        ave = a2/c2;
    }
    return ave;
}

main()
{
    int yy, xx[N]={1101,1202,1303,1404,1505,2611,2712,2813,2914,3202,4222};
    double pjz ;
    void NONO();

    pjz = fun( xx, &yy );
    printf("yy=%d, pjz=%.2lf\n", yy, pjz);
    NONO();
}

void NONO()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
   输出数据，关闭文件。 */
    int i, j, xx[N], yy;
    double pjz;
    FILE *rf, *wf ;

    rf = fopen("in.dat","r") ;
    wf = fopen("out.dat","w") ;
    for(i=0; i<10; i++) {
        for(j=0; j<N; j++) fscanf(rf, "%d ", &xx[j]);
        pjz = fun( xx, &yy );
        fprintf(wf, "%d, %.2lf\n", yy, pjz);
    }
   fclose(rf) ;
   fclose(wf) ;
}
