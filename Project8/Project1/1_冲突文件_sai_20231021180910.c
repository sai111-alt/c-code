#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	return 0;
}

//int main()//p137ϰ��10
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

//int main()//p137ϰ��8
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	int k = 0;
//	printf("ˮ�ɻ���������");
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

//int main()//p137ϰ��6
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

//int main()//p137ϰ��5
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int k = 0;//���ܺ�
//	printf("������a,n��");
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

//int main()//p137ϰ��4
//{
//	char r = 0;
//	int yw = 0;//Ϊƴ������ĸ
//	int kg = 0;
//	int sz = 0;
//	int qt = 0;
//	printf("������һ���ַ�:");
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
//	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n", yw, kg, sz, qt);
//
//	return 0;
//}

//int main()//p137ϰ��3
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;//������
//	int i = 0;//�ű�����
//	int u = 0;//�ų������������Լ��
//	int p = 0;//����С������
//	printf("��������������n,m:");
//	scanf("%d,%d", &m, &n);
//	i = m;
//	u = n;
//	while (r = i % u)//շת����������Լ��
//	{
//		i = u;
//		u = r;
//	}
//	p = m * n / u;//������˳������Լ����Ϊ��С������
//	printf("%d��%d�����Լ��Ϊ:%d\n", m, n, u);
//	printf("%d��%d����С������Ϊ:%d\n", m, n, p);
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
//		printf("���Խ���1�����ڹػ���������룺����˧�磬��ȡ���ػ���\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "����˧��"))
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
//	printf("���Խ���1�����ڹػ���������룺����˧�磬��ȡ���ػ���\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input,"����˧��"))
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()//p109ϰ��12
//{
//	double x = 0;
//	double y = 0;
//	double h = 0;
//	double m1 = 0;
//	double m2 = 0;
//	double m3 = 0;
//	double m4 = 0;
//	printf("������һ����(x,y):");
//	scanf("%lf,%lf", &x, &y);
//	m1 = sqrt((x - 2) * (x - 2) + (y - 2) * (y - 2));
//	m2 = sqrt((x - 2) * (x - 2) + (y - (-2)) * (y - (-2)));
//	m3 = sqrt((x - (-2)) * (x - (-2)) + (y - 2) * (y - 2));
//	m4 = sqrt((x - (-2)) * (x - (-2)) + (y - (-2)) * (y - (-2)));
//	if (m1 > 1 && m2 > 1 && m3 && m4 > 1)
//	{
//		printf("�õ�߶�Ϊ %.lf", h);
//	}
//	else
//	{
//		h = 10;
//		printf("�õ�߶�Ϊ %.lf", h);
//	}
//	return 0;
//}

//int main()//p109ϰ��10 ��switch���
//{
//	double i = 0;
//	int m = 0;
//	printf("����������:");
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
//		printf("������   %.2lf", i);
//		break;
//	case 1:
//		i = (i - 100000) * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//		break;
//	case 2:
//	case 3:
//		i = (i - 200000) * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//		break;
//	case 4:
//	case 5:
//		i = (i - 400000) * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		i = (i - 600000) * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//		break;
//	case 10:
//		i = (i - 1000000) * 0.01 + 400000 * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//		break;
//
//	}
//
//	return 0;
//}

//int main()//p109ϰ��10 ��if���
//{
//	double i = 0;
//	printf("����������:");
//	scanf("%lf", &i);
//	if (i > 1000000)
//	{
//		i = (i - 1000000) * 0.01 + 400000 * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//	}
//	else if (i > 600000)
//	{
//		i = (i - 600000) * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//	}
//	else if (i > 400000)
//	{
//		i = (i - 400000) * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//	}
//	else if (i > 200000)
//	{
//		i = (i - 200000) * 0.05 + 100000 * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//	}
//	else if (i > 100000)
//	{
//		i = (i - 100000) * 0.075 + 100000 * 0.1;
//		printf("������   %.2lf", i);
//	}
//	else 
//	{
//		i = i * 0.1;
//		printf("������   %.2lf", i);
//	}
//
//	return 0;
//}

//int main()//p109ϰ��9
//{
//	int i = 0;//������ֵ
//	int five = 0;//�ŵ�5λ����
//	int four = 0;//�ŵ�4λ����
//	int there = 0;//�ŵ�3λ����
//	int two = 0;//�ŵ�2λ����
//	int one = 0;//�ŵ�1λ����
//	printf("������һ��������5λ����������");
//	scanf("%d", &i);
//	five = (int)(i / 10000);
//	four = (int)((i - five * 10000) / 1000);
//	there = (int)((i - five * 10000 - four * 1000) / 100);
//	two = (int)((i - five * 10000 - four * 1000 - there * 100) / 10);
//	one = (int)(i - five * 10000 - four * 1000 - there * 100 - two * 10);
//	if (i > 9999 && i <= 99999)//�ж����
//	{
//		printf("%d��5λ��\n", i);
//		printf("˳������Ϊ:%d,%d,%d,%d,%d\n", five, four, there, two, one);
//		printf("��������Ϊ:%d,%d,%d,%d,%d", one, two, there, four, five);
//	}
//	else if (i > 999)
//	{
//		printf("%d��4λ��\n", i);
//		printf("˳������Ϊ:%d,%d,%d,%d\n", four, there, two, one);
//		printf("��������Ϊ:%d,%d,%d,%d", one, two, there, four);
//	}
//	else if (i > 99)
//	{
//		printf("%d��3λ��\n", i);
//		printf("˳������Ϊ:%d,%d,%d\n", there, two, one);
//		printf("��������Ϊ:%d,%d,%d", one, two, there);
//	}
//	else if (i > 9)
//	{
//		printf("%d��2λ��\n", i);
//		printf("˳������Ϊ:%d,%d\n", two, one);
//		printf("��������Ϊ:%d,%d", one, two);
//	}
//	else
//	{
//		printf("%d��1λ��\n", i);
//		printf("˳������Ϊ:%d\n", one);
//		printf("��������Ϊ:%d", one);
//	}
//
//
//	return 0;
//}

//int main()//p109ϰ��8,��switch���
//{
//	double i;
//	printf("������ѧ���ɼ�:");
//	scanf("%lf", &i);
//	double n = round(i);
//	printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���", n);
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

//int main()//p109ϰ��8����if���
//{
//	double i;
//	printf("������ѧ���ɼ�:");
//	scanf("%lf", &i);
//	if (i >= 90)
//	{
//		double n = round(i);
//		printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���A", n);
//	}
//	else if (i >= 80)
//	{
//		double n = round(i);
//		printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���B", n);
//	}
//	else if (i >= 70)
//	{
//		double n = round(i);
//		printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���C", n);
//	}
//	else if (i >= 60)
//	{
//		double n = round(i);
//		printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���D", n);
//	}
//	else
//	{
//		double n = round(i);
//		printf("�ɼ���  %.1lf,��Ӧ�ĵȼ���E", n);
//	}
//
//	return 0;
//}

//int main()//p108ϰ��6
//{
//	int x,y;
//	printf("����x:");
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

//int main()//p82ϰ��8
//{
//	char c1, c2;
//	printf("�����������ַ�c1,c2:");
//	c1 = getchar();
//	c2 = getchar();
//	printf("��putchar���������Ϊ:");
//	putchar(c1), putchar(c2);
//	printf("\n��printf���������Ϊ:%c %c", c1, c2);
//
//	return 0;
//}

//#define pi 3.1415//p82ϰ��7

//int main()//p82ϰ��7
//{
//	double r, h,l,s,sq,v,vz;
//	printf("������Բ�뾶r��Բ����h:");
//	scanf("%lf,%lf", &r, &h);
//	l = 2 * pi * r;
//	s = pi * r * r;
//	sq = 4 * pi * r * r;
//	v = 4 / 3.0 * pi * r * r * r;
//	vz = pi * r * r * h;
//	printf("Բ�ܳ�Ϊ��l=%.2lf\n", l);
//	printf("Բ���Ϊ��s=%.2lf\n", s);
//	printf("Բ������Ϊ��sq=%.2lf\n", sq);
//	printf("Բ�����Ϊ��v=%.2lf\n", v);
//	printf("Բ�����Ϊ��vz=%.2lf\n", vz);
//
//	return 0;
//}

//int main()//p82ϰ��6
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

//int main()//p80ϰ��2
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

//int main()//p80ϰ��1
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}