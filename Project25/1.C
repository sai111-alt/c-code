#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>
int my_strlen(const char* p)
{
	int count = 0;
	assert(p != NULL);
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char p[] = "abcdef";
	int len = my_strlen(p);
	printf("len = %d\n", len);

	return 0;
}

//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		; 
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	int* l = &num;
//	*l = 20;
//	//*p = 100;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}


////int Add(int x, int y)
////{
////	return x + y;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//i = Add(i, 0);  
//	for (i = 0; i <= 12;  i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//#include<windows.h>
//int main()
//{  
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%5d", i);
//		count++;
//		if (10 == count)
//		{
//			printf("\n");
//			count = 0;
//		}
//	}
//	system("pause");
//
//	return 0;
//}