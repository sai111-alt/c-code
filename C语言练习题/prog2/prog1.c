#include <stdio.h>
#define N 8
int fun(int x[],double *ave)
{
	int i = 0;
	int count = 0;
	*ave = 0;
	for (i = 0; i < N; i++)
	{
		if (*x%2 == 0)
		{
			count++;
			*ave = *ave + *x;
		}
		x++;
	}
	*ave = *ave / count;
	return count;
}

main()
{  int x[N]={ 12,5,9,8,23,4,7,21 }, n;
   double ave;
   void NONO();
   n=fun(x,&ave);
   printf("n=%d,ave=%lf\n",n,ave);
   NONO();
}
void NONO ()
{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
  FILE *in, *out ;
  int i,j, x[N], n ;
  double ave;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j=0 ; j < N; j++) fscanf(in, "%d,", &x[j]) ;
	   n=fun(x,&ave);
	 fprintf(out, "n=%d,ave=%lf\n",n,ave);
  }
  fclose(in) ;
  fclose(out) ;
}
