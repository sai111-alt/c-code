#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();

	return 0;
}


//#include<string.h>
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//int main()
//{
//	char* str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef");
//
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int i = 0;
//	int* p = (int *)calloc(5,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int i = 0;
//	int* p = (int *)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int *)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{  
//		int i = 0;
//		for (i = 0; i < 10; i++)   
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int *)malloc(10 * sizeof(int));
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}