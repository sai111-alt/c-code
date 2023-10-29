#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(long int));
//	printf("%d\n", sizeof(unsigned long int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	return 0;
//} 

//int main()
//{
//	float f = 3.14;
//	int num = f;
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	char b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb60000)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int d = 4;
//	i = a++ || ++b || d++;
//	printf("%d  %d  %d  %d", i, a, b, d);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	(a > 5)?(b=3):(b=-3);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1000;
//	printf("%d\n", b);
//
//	return 0;
//} 