#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	return 0;
}

//int main()//p137习题10
//{
//	int i = 0;
//	double n = 0;
//	double m = 0;
//	double x = 2;
//	double y = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		n = n + x / y;
//		m = x;
//		x = x + y;
//		y = m;
//	}
//	printf("2/1+3/2+5/3+13/8+21/13+...=%.6f\n", n);
//
//	return 0;
//}

//int main()//p137习题8
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	int k = 0;
//	printf("水仙花数包括：");
//	for (i = 100; i <= 999; i++)
//	{
//		m = i / 100;
//		n = i / 10 - m * 10;
//		k = i%10;
//		if (i == m * m * m + n * n * n + k * k * k)
//			printf(" %d ",i);
//	}
//	printf("\n");
//	return 0;
//}

//int main()//p137习题6
//{
//	long long i = 1;
//	long long z = 1;
//	int y = 0;
//	for (y = 2; y <= 20; y++)
//	{
//		i = i * y;
//		z = z + i;
//	}
//	printf("1!+2!+...+20!=%lld", z);
//
//	return 0;
//}

//int main()//p137习题5
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int k = 0;//放总和
//	printf("请输入a,n：");
//	scanf("%d,%d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//		m = m + a;
//		k = k + m;
//		a = a * 10;
//	}
//	printf("s=%d", k);
//
//	return 0;
//}

//int main()//p137习题4
//{
//	char r = 0;
//	int yw = 0;//为拼音首字母
//	int kg = 0;
//	int sz = 0;
//	int qt = 0;
//	printf("请输入一行字符:");
//	while ((r = getchar()) != '\n')
//	{
//		if (r >= 'a' && r <= 'z' || r >= 'A' && r <= 'Z')
//			yw++;
//		else if (r == ' ')
//			kg++;
//		else if (r >= '0' && r <= '9')
//			sz++;
//		else
//			qt++;
//	}
//	printf("字母数:%d\n空格数:%d\n数字数:%d\n其他字符数:%d\n", yw, kg, sz, qt);
//
//	return 0;
//}

//int main()//p137习题3
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;//放余数
//	int i = 0;//放被除数
//	int u = 0;//放除数和最后的最大公约数
//	int p = 0;//放最小公倍数
//	printf("请输入两个整数n,m:");
//	scanf("%d,%d", &m, &n);
//	i = m;
//	u = n;
//	while (r = i % u)//辗转相除法求最大公约数
//	{
//		i = u;
//		u = r;
//	}
//	p = m * n / u;//两数相乘除以最大公约数即为最小公倍数
//	printf("%d和%d的最大公约数为:%d\n", m, n, u);
//	printf("%d和%d的最小公倍数为:%d\n", m, n, p);
//	return 0;
//}

//#include<string.h>
//#include<stdlib.h>

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) 
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是帅哥，就取消关机！\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是帅哥"))
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是帅哥，就取消关机！\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input,"我是帅哥"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******* 1.play  0.exit  *******\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()//p109习题12
//{
//	double x = 0;
//	double y = 0;
//	double h = 0;
//	double m1 = 0;
//	double m2 = 0;
//	double m3 = 0;
//	double m4 = 0;
//	printf("请输入一个点(x,y):");
//	scanf("%lf,%lf", &x, &y);
//	m1 = sqrt((x - 2) * (x - 2) + (y - 2) * (y - 2));
//	m2 = sqrt((x - 2) * (x - 2) + (y - (-2)) * (y - (-2)));
//	m3 = sqrt((x - (-2)) * (x - (-2)) + (y - 2) * (y - 2));
//	m4 = sqrt((x - (-2)) * (x - (-2)) + (y - (-2)) * (y - (-2)));
//	if (m1 > 1 && m2 > 1 && m3 && m4 > 1)
//	{
//		printf("该点高度为 %.lf", h);
//	}
//	else
//	{
//		h = 10;
//		printf("该点高度为 %.lf", h);
//	}
//	return 0;
//}

//int main()//p109习题10 用switch语句
//{
//	double i = 0;
//	int m = 0;
//	printf("请输入利润:");
//	scanf("%lf", &i);
//	m = i / 100000;
//	if (m > 10)
//	{
//		m = 10;
//	}
//	switch (m)
//	{
//	case 0:
//		i = i * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//	case 1:
//		i = (i - 100000) * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//	case 2:
//	case 3:
//		i = (i - 200000) * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//	case 4:
//	case 5:
//		i = (i - 400000) * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		i = (i - 600000) * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//	case 10:
//		i = (i - 1000000) * 0.01 + 400000 * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//		break;
//
//	}
//
//	return 0;
//}

//int main()//p109习题10 用if语句
//{
//	double i = 0;
//	printf("请输入利润:");
//	scanf("%lf", &i);
//	if (i > 1000000)
//	{
//		i = (i - 1000000) * 0.01 + 400000 * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//	else if (i > 600000)
//	{
//		i = (i - 600000) * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//	else if (i > 400000)
//	{
//		i = (i - 400000) * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//	else if (i > 200000)
//	{
//		i = (i - 200000) * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//	else if (i > 100000)
//	{
//		i = (i - 100000) * 0.075 + 100000 * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//	else 
//	{
//		i = i * 0.1;
//		printf("奖金是   %.2lf", i);
//	}
//
//	return 0;
//}

//int main()//p109习题9
//{
//	int i = 0;//输入数值
//	int five = 0;//放第5位的数
//	int four = 0;//放第4位的数
//	int there = 0;//放第3位的数
//	int two = 0;//放第2位的数
//	int one = 0;//放第1位的数
//	printf("请输入一个不超过5位的正整数：");
//	scanf("%d", &i);
//	five = (int)(i / 10000);
//	four = (int)((i - five * 10000) / 1000);
//	there = (int)((i - five * 10000 - four * 1000) / 100);
//	two = (int)((i - five * 10000 - four * 1000 - there * 100) / 10);
//	one = (int)(i - five * 10000 - four * 1000 - there * 100 - two * 10);
//	if (i > 9999 && i <= 99999)//判断输出
//	{
//		printf("%d是5位数\n", i);
//		printf("顺序数字为:%d,%d,%d,%d,%d\n", five, four, there, two, one);
//		printf("反序数字为:%d,%d,%d,%d,%d", one, two, there, four, five);
//	}
//	else if (i > 999)
//	{
//		printf("%d是4位数\n", i);
//		printf("顺序数字为:%d,%d,%d,%d\n", four, there, two, one);
//		printf("反序数字为:%d,%d,%d,%d", one, two, there, four);
//	}
//	else if (i > 99)
//	{
//		printf("%d是3位数\n", i);
//		printf("顺序数字为:%d,%d,%d\n", there, two, one);
//		printf("反序数字为:%d,%d,%d", one, two, there);
//	}
//	else if (i > 9)
//	{
//		printf("%d是2位数\n", i);
//		printf("顺序数字为:%d,%d\n", two, one);
//		printf("反序数字为:%d,%d", one, two);
//	}
//	else
//	{
//		printf("%d是1位数\n", i);
//		printf("顺序数字为:%d\n", one);
//		printf("反序数字为:%d", one);
//	}
//
//
//	return 0;
//}

//int main()//p109习题8,用switch语句
//{
//	double i;
//	printf("请输入学生成绩:");
//	scanf("%lf", &i);
//	double n = round(i);
//	printf("成绩是  %.1lf,相应的等级是", n);
//	int m = (int)(n/10);
//	switch (m)
//	{
//		case 10:
//			putchar('A');
//			break;
//		case 9:
//			putchar('A');
//			break;
//		case 8:
//			putchar('B');
//			break;
//		case 7:
//			putchar('C');
//			break;
//		case 6:
//			putchar('D');
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			putchar('E');
//			break;
//	}
//
//	return 0;
//}

//int main()//p109习题8，用if语句
//{
//	double i;
//	printf("请输入学生成绩:");
//	scanf("%lf", &i);
//	if (i >= 90)
//	{
//		double n = round(i);
//		printf("成绩是  %.1lf,相应的等级是A", n);
//	}
//	else if (i >= 80)
//	{
//		double n = round(i);
//		printf("成绩是  %.1lf,相应的等级是B", n);
//	}
//	else if (i >= 70)
//	{
//		double n = round(i);
//		printf("成绩是  %.1lf,相应的等级是C", n);
//	}
//	else if (i >= 60)
//	{
//		double n = round(i);
//		printf("成绩是  %.1lf,相应的等级是D", n);
//	}
//	else
//	{
//		double n = round(i);
//		printf("成绩是  %.1lf,相应的等级是E", n);
//	}
//
//	return 0;
//}

//int main()//p108习题6
//{
//	int x,y;
//	printf("输入x:");
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//		printf("x=%d,   y=x=%d", x, y);
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//		printf("x=%d,  y=2*x-1=%d", x, y);
//	}
//	else
//	{
//		y = 3 * x - 11;
//		printf("x=%d,  y=3*x-11=%d", x, y);
//	}
//
//	return 0;
//}

//int main()//p82习题8
//{
//	char c1, c2;
//	printf("请输入两个字符c1,c2:");
//	c1 = getchar();
//	c2 = getchar();
//	printf("用putchar语句输入结果为:");
//	putchar(c1), putchar(c2);
//	printf("\n用printf语句输出结果为:%c %c", c1, c2);
//
//	return 0;
//}

//#define pi 3.1415//p82习题7

//int main()//p82习题7
//{
//	double r, h,l,s,sq,v,vz;
//	printf("请输入圆半径r，圆柱高h:");
//	scanf("%lf,%lf", &r, &h);
//	l = 2 * pi * r;
//	s = pi * r * r;
//	sq = 4 * pi * r * r;
//	v = 4 / 3.0 * pi * r * r * r;
//	vz = pi * r * r * h;
//	printf("圆周长为：l=%.2lf\n", l);
//	printf("圆面积为：s=%.2lf\n", s);
//	printf("圆球表面积为：sq=%.2lf\n", sq);
//	printf("圆球体积为：v=%.2lf\n", v);
//	printf("圆柱体积为：vz=%.2lf\n", vz);
//
//	return 0;
//}

//int main()//p82习题6
//{
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
//	putchar(c1), putchar(c2), putchar(c3), putchar(c4), putchar(c5);
//
//	return 0;
//}

//int main()//p80习题2
//{
//	double p=1000,p1,p2,p3,p4,p5;
//	p1 = p * (1 + 5*0.03);
//	p2 = p * (1 + 2 * 0.021) * (1 + 3 * 0.0275);
//	p3 = p * (1 + 3 * 0.0275) * (1 + 2 * 0.021);
//	p4 = p * pow(1.015, 5);
//	p5 = p * pow(1 + 0.0035 / 4, 4 * 5);
//	printf("p1=%f\n", p1);
//	printf("p2=%f\n", p2);
//	printf("p2=%f\n", p3);
//	printf("p2=%f\n", p4);
//	printf("p2=%f\n", p5);
//
//	return 0;
//}

//int main()//p80习题1
//{
//	double i = 1.07;
//	double n = 10;
//	double p ;
//	p=(pow(i, n)-1)*100;
//	printf("p=%.6f%%\n", p);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}