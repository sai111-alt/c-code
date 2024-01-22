#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{


	return 0;
}

//void menu()
//{
//	printf("*********************\n");
//	printf("** 1.Add     2.Sub **\n");
//	printf("** 3.Mul     4.Div **\n");
//	printf("**      0.exit     **\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//void menu()
//{
//	printf("*********************\n");
//	printf("** 1.Add     2.Sub **\n");
//	printf("** 3.Mul     4.Div **\n");
//	printf("**      0.exit     **\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		printf("\n");
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输出两个数值:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//	} while (input);
//
//	return 0;
//}

//void menu()
//{
//	printf("*********************\n");
//	printf("** 1.Add     2.Sub **\n");
//	printf("** 3.Mul     4.Div **\n");
//	printf("**      0.exit     **\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
//
//	return 0;
//}

//int Add(int x,int y)
//{
//	return (x + y);
//}
//int main()
//{
//	printf("%d\n", Add);
//	printf("%d\n", &Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*Add)(2, 3));
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n"); 
//	}
//}
//void print2(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *((*arr+i) + j));
//			printf("%d ", (*arr+i)[j]);
//		}
//		printf("\n"); 
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	printf("\n");
//	print2(arr, 3, 5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(*pa + i));
//		printf("%d ", (*pa)[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//
//	return 0;
//}

//int main ()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	*p = 'W';
//	printf("%s\n", p);
//
//	return 0;
//}