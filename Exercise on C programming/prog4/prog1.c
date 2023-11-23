#include  <stdio.h>
void  fun(  double  aa, int  *x, double  *y )
{ 
    *x = (int)aa;
    *y = aa - *x;
}
main()
{ void NONO();
  double  aa, b;  int  a;
  printf("请输入一个双精度数:  ");scanf("%lf",&aa);
  fun( aa, &a, &b );
  printf( "%f的整数部分是: %d   小数部分是%f\n", aa,a,b );
  NONO();
}
void NONO()
{
  FILE *in, *out ;
  double  aa, b;  int  a;
  int i ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
	fscanf(in, "%lf", &aa) ;
    fun( aa, &a, &b );
    fprintf(out, "%f的整数部分是: %d   小数部分是%f\n", aa,a,b );
  }
  fclose(in) ;
  fclose(out) ;
}
