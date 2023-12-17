/*------------------------------------------------
【程序设计】
--------------------------------------------------
/*    学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，
请编写函数fun，它的功能是：把指定分数范围内的学生数据放在h所指的数组中，分数范围内的学生人数由函数值返回。
    例如，输入的分数是60  69，则应当把分数在60到69的学生数据进行输出，
包含60分和69分的学生数据。主函数中将把60放在low中，把69放在heigh中。
    注意：部分源程序存在文件prog.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*********Begin**********和**********  End  **********不可删除
*/


#include <stdio.h>
#define N 16
typedef struct
{   char num[10];
    int s;
} STREC;
int fun(STREC *a,STREC *b,int l,int h)
{

    /**********  Begin  **********/
	int i=0;
	int c=0;
	for(i=0;i<16;i++)
	{
		if(a[i].s<=h&&a[i].s>=l)
		{
			*b++=a[i];
			c++;
		}
	}
	return c;
  
  
  
    /**********   End  ***********/

}

main()
{  STREC s[N]={{"GA05",85},{"GA03",76},{"GA02",69},{"GA04",85},{"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87},{"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91},{"GA011",91},{"GA017",64},{"GA018",64},{"GA016",72}};
  STREC h[N];FILE *out;
  int i,n,low,heigh,t;
  printf("Enter 2 interger number low & heigh:");
  scanf("%d%d",&low,&heigh);
  if (heigh<low) {t=heigh;heigh=low;low=t;}
  n=fun(s,h,low,heigh);
  printf("The student's data between %d--%d:\n",low,heigh);
  for(i=0;i<n;i++)
    printf("%s  %4d\n",h[i].num,h[i].s);
  printf("\n");
  out=fopen("out18.dat","w");
  n=fun(s,h,80,98);
  fprintf(out,"%d\n",n);
  for(i=0;i<n;i++)
     fprintf(out,"%s  %4d\n",h[i].num,h[i].s);
  fclose(out);
}

