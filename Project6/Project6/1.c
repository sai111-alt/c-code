#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	
	
	//int year = 0;//判断闰年
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	//if (year % 4 == 0 && year % 100 != 0)
	//	//{
	//	//	printf("%d\n", year);
	//	//	count++;
	//	//}
	//	//else if (year % 400 == 0)
	//	//{
	//	//	printf("%d\n", year);
	//	//	count++;
	//	//}
	//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	{
	//		printf("%d\n", year);
	//		count++;
	//	}
	//}
	//printf("\ncount = %d\n", count);

	//int i = 1000;
	//int count = 0;
	//while (i <= 2000)
	//{
	//	if (i % 400 == 0)
	//	{
	//		printf("%d\n", i);
	//		count++;
	//	}
	//	else if (i % 4 == 0 && i % 100 != 0)
	//	{
	//		printf("%d\n", i);
	//		count++;
	//	}
	//	i++;
	//}
	//printf("\ncount = %d\n", count);

	//int m = 0;//求两个数的最大公约数
	//int n = 0;
	//int r = 0;
	//scanf("%d%d", &m, &n);
	//while (r = m % n)
	//{
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", n);

	//int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//		printf("%d\n", i);
	//}
	
	//int a = 0;
	//while (a<99)
	//{
	//	a += 3;
	//	printf("%d\n", a);
	//}
	
	//int a = 0;//题目：从大到小输出
	//int b = 0;
	//int c = 0;
	//scanf("%d,%d,%d", &a, &b, &c);
	//if (a < b)
	//{
	//	int tem = a;
	//	a = b;
	//	b = tem;
	//}
	//if (a < c)
	//{
	//	int tem = a;
	//	a = c;
	//	c = tem;
	//}
	//if (b < c)
	//{
	//	int tem = b;
	//	b = c;
	//	c = tem;
	//}
	//printf("%d %d %d\n", a, b, c);

	//char ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}
	
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf("%s", password);
	//while((ch=getchar())!='\n');
	//{
	//	;
	//}
	//printf("请确认(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	
	//int i = 1;
	//while (i <= 10)
	//{
	//	i++;
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);
	//}
		
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d ", i);
	//	i++;
	//}

	//if (1)
	//	printf("hehe\n");

	//while (1)
	//	printf("hehe\n");

	//int n = 1;//——练习题
	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d,n = %d", m, n);

	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日\n");
	//	break; 
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//	break;
	//}

	
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期1\n");
	//	break;
	//case 2:
	//	printf("星期2\n");
	//	break;
	//case 3:
	//	printf("星期3\n ");
	//	break;
	//case 4:
	//	printf("星期4\n");
	//	break;
	//case 5:
	//	printf("星期5\n");
	//	break;
	//case 6:
	//	printf("星期6\n");
	//	break;
	//case 7:
	//	printf("星期7\n");
	//	break;
	//}
	
	//int i = 0;
	//while (i < 100)
	//{
	//	i++;
	//	if (1 == i % 2)
	//	{ 
	//		printf("%d ", i);
	//	}
	//}
	
	//int num = 1;
	//if ( 5 == num )
	//{
	//	printf("hehe\n");
	//}
	
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//{
	//	if (b == 2)
	//		printf("hehe\n");
	//}
	//else
	//		printf("haha\n");

	//int age = 10;
	//if (18 <= age < 28)//——错误引用
	//	printf("青年\n");
	
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");//——多分支
	//	printf("不能谈恋爱\n");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("寿星\n");
	//}
	//	printf("未成年\n");//——单分支或双分支
	//else
	//	printf("成年\n");

	return 0;
}