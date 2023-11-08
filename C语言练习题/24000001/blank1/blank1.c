#include<stdio.h>
#pragma warning (disable:4996)
void fun(int *dt,int n)
{
	int i,m,t;
/**********************found***********************/
	m=0  ;
	for(i=1;i<n;i++)
/**********************found***********************/
		if(dt[i]<dt[m])
			m=i;
	t=dt[0];
/**********************found***********************/
	dt[0] = dt[m];
	dt[m]=t;
}
main()
{
	int a[10]={ 30,20,15,64,85,28 }; 
	int i,n=6;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
	fun(a,n);
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n");
}
