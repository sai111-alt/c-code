#include <stdio.h>
#define N 5
struct mpow
{
	double a;
	int t;
};
double fun(struct mpow *x,int n)
{
	int i = 0;
	double sum = 0.0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		double power = 1.0;
		for (j = 1; j <=x[i].t; j++)
		{
			power *= x[i].a;
		}
		sum += power;
	}
	return sum;
}
void main()
{
	void NONO();
	struct mpow x[N]={ 12,0,9,2,23,1,7,2 };
	double sum;
	sum=fun(x,4);
	printf("sum=%lf\n",sum);
	NONO();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  struct mpow x[N];
  int i,j ;
  double sum;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j=0 ; j < 4; j++) fscanf(in, "%lf,%d,", &x[j].a,&x[j].t) ;
	   sum=fun(x,4);
	 fprintf(out, "sum=%lf\n",sum);
  }
  fclose(in) ;
  fclose(out) ;
}
