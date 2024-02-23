#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stddef.h>
typedef struct s
{
	char c1;
	int a;
	char c2;
}S;
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	S s = {1,2,3};
	int c = sizeof(s);
	//printf("%d\n", c);

	//printf("%d\n", offsetof(S, c1));
	//printf("%d\n", offsetof(S, a));
	//printf("%d\n", offsetof(S, c2));

	printf("%d\n", OFFSETOF(S, c1));
	printf("%d\n", OFFSETOF(S, a));
	printf("%d\n", OFFSETOF(S, c2));

	printf("%d %d %d", s.c1, s.a, s.c2);

	return 0;
}

//#define ABC
//int main()
//{
//	int a = 10;
//#ifndef ABC
//	printf("%d\n", a);
//#endif
//
//#if !defined(ABC)
//	printf("%d\n", a);
//#endif
//
//#if 1+1
//	printf("hehe");
//#endif
//
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	printf("MAX=%d\n", MAX);
//
//#undef MAX
//
//	printf("MAX=%d\n", MAX);
//	 
//
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	
//	int max = MAX(a++, b++);
//
//	printf("%d %d %d", a, b, max);
//
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//#define CAT(X,Y) X##Y
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Class84 = 2024;
//	 
//	PRINT(a);
//	PRINT(b);
//	printf("%d\n", CAT(Class, 84));
//
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo"" world\n");
//
//	return 0;
//}

//#define SQUARE(x) ((x)*(x))
//int main()
//{
//	int ret = SQUARE(5);
//	printf("%d %d", ret,SQUARE(5+1));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", __STDC__);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(" ");
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d  date:%s time:%s\n",
//			__FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("\nc = %d", c);
//
//	return 0;
//}