/*------------------------------------------------
��������ơ�
--------------------------------------------------

��Ŀ����д����fun�������Ĺ����ǣ���һ�����д���ƽ
      ��ֵ�����ĸ�����
      ���磺������һ����Ϊ1,3,6,9,4,23,35,67,12,88
      ʱ������ֵΪ3��

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������main����
      �������е��κ����ݣ����ں���fun�Ļ���������
      ������д��������䡣
*********Begin**********��**********  End  **********����ɾ��



------------------------------------------------*/

#include "stdio.h"
int fun(int a[],int n)
{

/*********Begin**********/
    float sum = 0;
    int count = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum /= n;
    for (i = 0; i < n; i++)
    {
        if (a[i] > sum)count++;
    }
    return count;
/**********  End  **********/

}
main()
{
int a[10]={1,3,6,9,4,23,35,67,12,88};
int y;
y=fun(a,10);
printf("y=%d\n",y);
TestFunc();
}
TestFunc()
{
FILE *IN,*OUT;
int iIN[10],iOUT,i,j;
IN=fopen("25.in","r");
if(IN==NULL)
{printf("Please Verify The Currernt Dir..It May Be Changed");
}
OUT=fopen("25.out","w");
if(OUT==NULL)
{printf("Please Verify The Current Dir.. It May Be Changed");
}
for(j=0;j<10;j++)
{     for(i=0;i<10;i++)
	fscanf(IN,"%d",&iIN[i]);
        iOUT=fun(iIN,10);
	fprintf(OUT,"%d\n",iOUT);
}
fclose(IN);
fclose(OUT);
}