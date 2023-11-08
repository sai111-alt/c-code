#include <stdio.h> 
#include <string.h>
#pragma warning (disable:4996)
void fun(char*sp ,int *ct)
{
	//老师的方法


	//我的方法
	//char* i = "ea";
	//char* j = "ou";
	//char* k = "iu";
	//ct[0] = 0;
	//ct[1] = 0;
	//ct[2] = 0;

	//char* cur = sp;
	//char* s1 = NULL;
	//char* s2 = NULL;

	//while (*cur)
	//{
	//	s1 = cur;
	//	s2 = i;
	//	while (s1 && s2 && (*s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//	}
	//	if (!*s2)
	//	{
	//		ct[0]++;
	//	}
	//	cur++;
	//}
	//cur = sp;
	//while (*cur)
	//{
	//	s1 = cur;
	//	s2 = j;
	//	while (*s1 && *s2 && (*s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//	}
	//	if (!*s2)
	//	{
	//		ct[1]++;
	//	}
	//	cur++;
	//}
	//cur = sp;
	//while (*cur)
	//{
	//	s1 = cur;
	//	s2 = k;
	//	while (*s1 && *s2 && (*s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//	}
	//	if (!*s2)
	//	{
	//		ct[2]++;
	//	}
	//	cur++;
	//}
}
main()
{	void NONO();
	char txt[200]="abeaeafeeaoukgdoouuoiouifwieeotiu";
	int c[3];
	fun(txt,c);
	printf("%d,%d,%d\n",c[0],c[1],c[2]); 
	NONO();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, c[3] ;
  char txt[200], *p ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(txt, 200, rf) ;
    p = strchr(txt, '\n') ;
    if(p != NULL) *p = 0 ;
	fun(txt,c);
	fprintf(wf, "%d,%d,%d\n",c[0],c[1],c[2]); 
  }
  fclose(rf) ; fclose(wf) ;
}
