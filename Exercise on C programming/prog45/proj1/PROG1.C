/*------------------------------------------------
��������ơ�
--------------------------------------------------
/*    ѧ���ļ�¼��ѧ�źͳɼ���ɣ�N��ѧ�������������������з���ṹ������s�У�
���д����fun�����Ĺ����ǣ���ָ��������Χ�ڵ�ѧ�����ݷ���h��ָ�������У�������Χ�ڵ�ѧ�������ɺ���ֵ���ء�
    ���磬����ķ�����60  69����Ӧ���ѷ�����60��69��ѧ�����ݽ��������
����60�ֺ�69�ֵ�ѧ�����ݡ��������н���60����low�У���69����heigh�С�
    ע�⣺����Դ��������ļ�prog.c�С�
    ����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
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
