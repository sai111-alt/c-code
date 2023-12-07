/*------------------------------------------------
【程序设计】
--------------------------------------------------
功能：将主函数中输入的字符串反序存放。
例如：输入字符串"abcdefg"，则应输出"gfedcba"。
*********Begin**********和**********  End  **********不可删除

------------------------------------------------*/
  
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 81
void TestFunc();

void fun(char *str,int n)
{                
  
  /**********Begin**********/
    int i = 0;
    int temp = 0;
    for (i = 0; i <(n / 2); i++)
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
  /**********  End  **********/
  
}

void main()
{
  char s [N];
  int l;
  printf("input a string:");gets(s);
  l=strlen(s);
  fun(s,l);
  printf("The new string is :");puts(s);
  TestFunc();
}

void TestFunc()
{
  FILE *IN,*OUT;
  char sIN[20],*sOUT;
  int iLENGTH;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..It May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. It May Be Changed");
  }
  fscanf(IN,"%s",sIN);
  iLENGTH=strlen(sIN);
  sOUT=sIN;
  fun(sIN,iLENGTH);
  fprintf(OUT,"%s\n",sOUT);
  fclose(IN);
  fclose(OUT);
} 