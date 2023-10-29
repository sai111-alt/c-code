#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void bubble_sort(int arr[])
{
	int s = &arr;
	int z = &arr[0];
	int sz = s / z;
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				
			}
		}
	}
}

int main()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	bubble_sort(arr);
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr[3][4] = { {1,2,4},{6,5,4} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{ 
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}