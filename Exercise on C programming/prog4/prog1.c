#include  <stdio.h>
void  fun(  double  aa, int  *x, double  *y )
{ 
    *x = (int)aa;
    *y = aa - *x;
}
main()
{ void NONO();
  double  aa, b;  int  a;
  printf("������һ��˫������:  ");scanf("%lf",&aa);
  fun( aa, &a, &b );
  printf( "%f������������: %d   С��������%f\n", aa,a,b );
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
    fprintf(out, "%f������������: %d   С��������%f\n", aa,a,b );
  }
  fclose(in) ;
  fclose(out) ;
}
