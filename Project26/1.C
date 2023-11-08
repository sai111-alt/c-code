#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		Sleep(100);
//		printf("hello world\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char a = 48;
//	printf("%c\n", a);
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 20;
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//
//	return 0;
//}
