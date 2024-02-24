#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//char a = 0;
	//scanf(" %c", &a);
	//printf("%casdf", a);

	//char arr[10] = { 0 };
	//scanf("%5s", arr);
	//printf("%s", arr);

	int year = 0;
	int month = 0;
	int day = 0;

	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("%d %d %d", year, month, day);
	
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//
//	return 0;
//}

//int main()
//{
//	int x;
//	float y;
//
//	scanf("%d%f", &x, &y);
//	printf("%d %f\n", x, y);
//
//	return 0;
//}

//int main()
//{
//	int i, j, k, l=0;
//	int ret = 0;
//	ret = scanf("%d%d%d%d", &i, &j, &k, &l);
//
//	printf("%d\n%d\n%d\n%d\n%d\n", i, j, k, l, ret);
//
// 	return 0;
//}

//int main()
//{
//	printf("%s will come%% tonight\n", "张三");
//	printf("%+d\n", 5);
//	printf("%+d\n", -5);
//	printf("%.2f\n", 5.223);
//	printf("%.2f\n", 5.226);
//	printf("%6.2f\n", 5.226);
//	printf("%*.*f\n", 6, 2, 5.226);
//	printf("%.4s\n", "hello");
//
//	return 0;
//}

//int global = 100;//—全局变量

//int main()//主函数-程序的入口-main函数有且只有一个
//{
	//extern int g_val;//extern——声明一下外部符号
	//printf("g_val=%d\n", g_val);

	//计算两个数的和
	//int num1 = 0;
	//int   num2 = 0;
	//int sum = 0;	
	//scanf("%d%d",&num1,&num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	
	//int global = 10;//——局部变量 
	//printf("global = %d\n", global);

	//float weight = 95.6f;
	//printf("%d\n", sizeof(char));//—求占用空间
	//printf("%d\n", sizeof(short)); 
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//printf("%d\n", sizeof(long double));

	//double d = 3.14;
	//printf("%lf\n", d);

	//float f = 5.0;
	//printf("%f\n", f);

	//long num = 100;
	//printf("%d\n", num);

	//int age = 20;
	//printf("%d\n", age);

	//char ch = 'A';
	//printf("%c\n", ch);

	//printf("hehe world"); 

		//return 0;
//}