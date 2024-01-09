/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：将主函数中输入的字符串反序存放。
例如：输入字符串"abcdefg"，则应输出"gfedcba"。

------------------------------------------------*/
#include "stdio.h"
#include "string.h"
#include "conio.h"
#define N 81

void fun(char *str,int n)
{                
  
  /*********Begin**********/
	char* left =str;
	char* right =str;
	char c=0;
	while(*right)
	{
		right++;
	}
	right--;
	while(left<=right)
	{
		c=*left;
		*left=*right;
		*right=c;
		left++;
		right--;
	}
  /**********  End  **********/
  
}
TestFunc()
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
main()
{
  char s [N];
  int l;
  printf("input a string:");gets(s);
  l=strlen(s);
  fun(s,l);
  printf("The new string is :");puts(s);
  TestFunc();
}