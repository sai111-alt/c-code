/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：将两个两位数的正整数a、b合并形成一个整数放在c
      中。合并的方式是：将a数的十位和个位数依次放在
      c数的千位和十位上， b数的十位和个位数依次放在
      c数的个位和百位上。     
例如：当a＝45，b=12。调用该函数后，c=4251。  
 
------------------------------------------------*/

#include "stdio.h"
  
void fun(int a, int b, long *c)     
{
  /*********Begin**********/
    int a1 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 0;
    a1 = a % 10;
    a2 = (a / 10) % 10;
    b1 = b % 10;
    b2 = (b / 10) % 10;
    *c = a1 * 10 + a2 * 1000 + b1*100 + b2;
  /**********  End  **********/
}
     
main()     
{ 
  int a,b;
  long c;     
       
  printf("Input a, b:");     
  scanf("%d%d", &a, &b);     
  fun(a, b, &c);     
  printf("The result is: %ld\n", c);
  
  NONO();     
}    

NONO ( )     
{  
  FILE *rf, *wf ;     
  int i, a,b ; 
  long c ;     
  rf = fopen("in.dat", "r") ;     
  wf = fopen("out.dat","w") ;     
  for(i = 0 ; i < 10 ; i++) 
  {     
    fscanf(rf, "%d,%d", &a, &b) ;     
    fun(a, b, &c) ;     
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;     
  }     
  fclose(rf) ;     
  fclose(wf) ;     
}   