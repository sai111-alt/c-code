#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	printf("%s", arr1);
//
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefsdfas";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include<assert.h>
//#include<string.h>
//my_strcmp(const char* dest,const char* src)
//{
//	assert(dest && src);
//	while (*dest == *src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	return (*dest - *src);
//	//if (*dest > *src)
//	//	return 1;
//	//else
//	//	return -1;
//}
//int main()
//{
//	char* p1 = "qbc";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	
//	return 0;
//}

//int main()//P165ϰ��8
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int max = 0;//�Ű���
//	int line = 0;//�Ű�����к�
//	int column = 0;//�Ű�����к�
//	int count = 0;//����
//	int count2 = 0;//��������ĳ�а��㲻���ڣ���++
//	int arr[4][5] = { 0 };
//	printf("�������ά����<4��5��>��\n");
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		max = arr[i][0];//���뽫max��ΪĳԪ�أ������άԪ��ȫ�Ǹ�������maxΪ0������ڴ���
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				line = i;
//				column = j;
//			}
//		}
//		//��ʱmax����һ����������,�ٽ����������е������Ƚ�
//		for (p = 0; p < 4; p++)
//		{
//			if (max <= arr[p][column])
//			{
//				count++;
//			}
//			if (4 == count)//���max�Ǵ�����С����countΪ4
//			{
//				printf("����ֵ��%d,�кţ�%d,�кţ�%d\n", max, line, column);
//			}
//
//		}
//		if (4 != count)
//		{
//			count2++;
//		}
//		count = 0;
//	}
//	if (4 == count2)//��4�ж�û�а���ʱ����count2Ϊ4
//	{
//		printf("�ö�ά���鲻���ڰ���\n");
//	}
//	return 0;
//}

//int main()//P165ϰ���6��
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%5d ", arr[i][j]);
//			if (i == j)
//			{
//				break;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//P165ϰ���5��
//{
//	int i = 0;
//	int arr[] = { 8,6,3,5,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//szΪԪ�ظ���
//	printf("δ����ǰ������ a:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	printf("����������� a:\n");
//	for (i = 0; i < sz/2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz -1 - i];
//		arr[sz -1 - i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()//P165ϰ���4��
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int arr[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;//szΪ����Ԫ���±�
//	printf("ԭ���� a:\n");
//	for (i = 0; i <= sz-1; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	printf("������Ҫ���������:");
//	scanf("%d", &p);
//	if (p > arr[9])
//	{
//		arr[sz] = p;
//	}
//	else
//		for (i = 0; i <= sz; i++)
//		{
//			if ( p < arr[i])
//			{
//				int tmp = arr[i];
//				arr[i] = p;
//				for (j = i+1; j <= sz; j++)
//				{
//					int tmp1 = arr[j];
//					arr[j] = tmp;
//					tmp = tmp1;
//				}
//				break;
//			}
//		}
//	printf("��������� a:\n");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<math.h>
//int main()//p165ϰ��1
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i <= 100; i ++ )
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//������i������д����������ˣ���1*���������б���һ����<=sqrt��i������������
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%4d", i);
//			count++;
//		}
//		if (count  == 5)
//		{
//			printf("\n");
//			count = 0;
//		}
//	}
//
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = x;
//	y = x;
//	x = tmp;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(100, 200);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include<math.h>
//int main()//p138ϰ��16
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int row_c = 0;
//	printf("����������������������");
//	scanf("%d", &row_c);
//	for (i = 1; i <= row_c/2+1 ; i++)
//	{
//		for (j = 1; j <= row_c / 2 + 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (p = 1; p <= 2 * i - 1; p++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= row_c / 2 ; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (p = 1; p <= 2*(row_c/2-i)+1 ; p++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()//p138ϰ��15
//{
//	double x1 = 0.0;//�����ֵ
//	double x2 = 0.0;//���Ҷ�ֵ
//	double x3 = 0.0;//���м�ֵ
//	double y1 = 0.0;//������ֵ
//	double y2 = 0.0;//���Һ���ֵ
//	double y3 = 0.0;//���м亯��ֵ
//	printf("�����빤������x1��x2:");
//	scanf("%lf %lf", &x1, &x2);
//	y1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
//	y2 = 2 * x2 * x2 * x2 - 4 * x2 * x2 + 3 * x2 - 6;
//	do
//	{
//		if (y1 * y2 < 0)
//		{
//			x3 = (x1 + x2) / 2;
//			y3 = 2 * x3 * x3 * x3 - 4 * x3 * x3 + 3 * x3 - 6;;
//			if (y3 * y2 < 0)
//			{
//				x1 = x3;
//				y1 = y3;
//			}
//			else
//			{
//				x2 = x3;
//				y2 = y3;
//			}
//		}
//	} while (fabs(y3) >= 1e-5);
//	printf("���̵ĸ��ǣ�%lf\n", x3);
//
//	return 0;
//}

//int main()//p138ϰ��14
//{
//	double x1 = 0.0;
//	double x2 = 1.5;
//	double y1 = 0.0;
//	double y2 = 0.0;
//	do
//	{
//		x1 = x2;
//		y1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
//		y2 = 6 * x1 * x1 - 8 * x1 + 3;
//		x2 = x1 - y1 / y2;
//	} while (fabs(x2 - x1) >= 1e-5);
//	printf("�÷��̵ĸ��ǣ�%lf", x2);
//
//	return 0;
//}

//int main()//p138ϰ��13
//{
//	double a = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//	printf("������һ��������:");
//	scanf("%lf", &a);
//	x1 = a;
//	x2 = (1.0 / 2)*(x1 + a / x1);
//	do
//	{
//		x1 = x2;
//		x2 = (1.0 / 2) * (x1 + a / x1);
//	}while (fabs(x2 - x1) >= 1e-5);
//	printf("%.2lf��ƽ�����ǣ�%lf",a, x1);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()//p138ϰ��16
//{
//	char arr1[] = "       ";
//	char arr2[] = "*******";
//	char arr3[] = "       ";
//	int mid = (strlen(arr1) - 1)/2;//�������ַ���ϵ��ַ�������-1���2��Ӧ���ַ��±꼴Ϊ�м���ַ�
//	int left = mid;//������߱仯���ַ��±�
//	int right = mid;//�����ұ߱仯���ַ��±�
//	while (left <= right)//��������ұ���������ʱ�˳�ѭ��
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//		if (left == -1)
//		{
//			while (left <= right)
//			{	
//				left++;
//				right--;
//				arr1[left] = arr3[left];
//				arr1[right] = arr3[right];
//				printf("%s\n", arr1);
//			}
//		}
//	}
//	return 0;
//}

//int main()//p138ϰ��12
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= 9; i++ )
//	{
//		j = (j+1) * 2 ;
//	}
//	printf("��1�����������%d��\n", j);
//
//
//	return 0;
//}

//int main()//p138ϰ��11
//{
//	int i = 0;
//	double j = 100.0;//�������
//	double k = 50.0;//���ڳ�2
//	for (i = 1; i < 10; i++)//ע���10�����ֻ��9��ѭ��
//	{
//		j = 2*k + j;
//		k = k / 2;
//	}
//	printf("��10�����ʱ������%lf��\n", j);
//	printf("��10�η���%lf��\n", k);
//
//	return 0;
//}

//int main()//p137ϰ��10
//{
//	int i = 0;
//	for (i = 1; i < 1000; i++)
//	{
//		int j = 0;
//		int l = 0;//�����Ӻ�
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				l = l + j;
//			}
//		}
//		if (l == i)
//		{
//			int p = 0;
//			printf("%d its factors are  ", i);
//			for (p = 1; p < i; p++)
//			{
//				if (i % p == 0)
//				{
//					printf("%d, ", p);
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

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