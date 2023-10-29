#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void test()  //——1
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}

//extern int Add(int, int); //——2

//#define MAX(X,Y) (X>Y?X:Y)  //——3

//struct Book  //——4
//{
//	char name[20];
//	short price;
//};
 
int main()
{
	//struct Book b1 = { "C语言程序设计",55 };  //——4
	//strcpy(b1.name, "C++");
	//printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'a';
	//printf("%c\n", ch);
	//printf("%d\n", sizeof(pc));
	
	//int a = 10;
	//int* p = &a;
	////printf("%p\n", &a);
	////printf("%p\n", p);
	//*p = 29;
	//printf("a = %d\n", a);
	
	//int a = 100;  //——3
	//int b = 200;
	//int max = MAX(a, b);
	//printf("max = %d\n", max);
	
	//int a = 10; //——2
	//int b = 20;     
	//int sum = Add(a, b);
	//printf("sum = %d\n", sum);
	
	//extern int g_val; //——4
	//printf("g_val = %d\n", g_val);

	//int i = 0;  //——1
	//while (i < 5)  
	//{
	//	test();
	//	i++;
	//}

	//int a = 10;
	//int b = 20;
	//int max = 0;
	//max = (a > b ? a : b);
	//printf("%d\n", max);

	//int a = 0;
	//int b = 5;
	//int c = a && b;
	//printf("%d\n", c);
	
	//int a = (int)3.14;
	
	//int a = 10;
	//int b = a++;
	//int c = ++a;
	//printf("a=%d  b=%d c=%d\n", a, b, c);
	
	//int a = 0;
	//int b = ~a;
	//printf("%d\n", b);

	return 0;
}