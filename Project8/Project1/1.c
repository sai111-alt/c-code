#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#include  <stdio.h>
//#include  <string.h>
//struct student {
//	long sno;
//	char name[10];
//	float score[3];
//};
//
//**********FILL**********/
//struct student* fun(struct student* a)
//{
//	int i;
//	a->sno = 10002;
//	strcpy(a->name, "LiSi");
//
//	/**********FILL**********/
//	for (i = 0; i < 3; i++) *(a->score+i) -= 1;
//
//	/**********FILL**********/
//	return a;
//}
//main()//10-10
//{
//	struct student s = { 10001,"ZhangSan", 95, 80, 88 }, * t;
//	int i;
//	printf("\n\nThe original data :\n");
//	printf("\nNo: %ld Name: %s\nScores: ", s.sno, s.name);
//	for (i = 0; i < 3; i++) printf("%6.2f ", s.score[i]);
//	printf("\n");
//	t = fun(&s);
//	printf("\nThe data after modified :\n");
//	printf("\nNo: %ld Name: %s\nScores: ", t->sno, t->name);
//	for (i = 0; i < 3; i++) printf("%6.2f ", t->score[i]);
//	printf("\n");
//}

//#include <stdio.h>
//#define N 8
//typedef struct
//{
//    char num[10];
//    double s;
//} STREC;
//double fun(STREC* a, STREC* b, int* n)
//{
//    /**********  Begin  **********/
//    double ave = 0;
//    int i = 0;
//    *n = 0;
//    for (i = 0; i < N; i++)
//    {
//        ave += (a + i)->s;
//    }
//    ave /= N;
//    for (i = 0; i < N; i++)
//    {
//        if ((a + i)->s < ave)
//        {
//            *b++ = *(a + i);
//            (*n)++;
//        }
//    }
//    return ave;
//    /**********   End  ***********/
//
//}
//main()//10-9
//{
//    STREC s[N] = { {"GA05",85},{"GA03",76},{"GA02",69},{"GA04",85},{"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87} };
//    STREC h[N];
//    FILE* out;
//    int i, n; double ave;
//    ave = fun(s, h, &n);
//    printf("The %d student data which is lower than %7.3f:\n", n, ave);
//    for (i = 0; i < n; i++)
//        printf("%s %4.1f\n", h[i].num, h[i].s);
//    printf("\n");
//    out = fopen("out13.dat", "w");
//    fprintf(out, "%d\n%7.3f\n", n, ave);
//    for (i = 0; i < n; i++)
//        fprintf(out, "%s %4.1f\n", h[i].num, h[i].s);
//    fclose(out);
//}

//#include  <stdio.h>
//#include  <string.h>
//struct student {
//	long sno;
//	char name[10];
//	float score[3];
//};
//void fun(struct student a)
//{
//	struct student b; int i;
//	/**********FILL**********/
//	b = a;
//	b.sno = 10002;
//	/**********FILL**********/
//	strcpy(b.name, "LiSi");
//	printf("\nThe data after modified :\n");
//	printf("\nNo: %ld Name: %s\nScores: ", b.sno, b.name);
//	/**********FILL**********/
//	for (i = 0; i < 3; i++) printf("%6.2f ", b.score[i]);
//	printf("\n");
//}
//void main()//10-8
//{
//	struct student s = { 10001,"ZhangSan", 95, 80, 88 };
//	int i;
//	printf("\n\nThe original data :\n");
//	printf("\nNo: %ld Name: %s\nScores: ", s.sno, s.name);
//	for (i = 0; i < 3; i++) printf("%6.2f ", s.score[i]);
//	printf("\n");
//	fun(s);
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//#include <windows.h>
//void fun(char* str)
//{
//    /**********  Begin  **********/
//    int i = 0;
//    char* p = NULL;
//    while (*str++)
//    {
//        if (*str == ' ')
//        {
//            p = str;
//            while (*p)
//            {
//                *p++ = *(p + 1);
//            }
//        }
//    }
//    /**********   End  ***********/
//}
//void main()//10-7
//{
//    char str[81];
//    system("cls");
//    printf("Input a string:");
//    gets(str);
//    puts(str);
//    fun(str);
//    printf("*** str: %s\n", str);
//}

//#include  "ctype.h"
//#include<windows.h>
//************Error************/
//#include  <stdio.h>
//************Error************/
//void upfst(char*  p)
//{
//    int  k = 0;
//    for (; *p; p++)
//        if (k)
//        {
//            if (*p == ' ')   k = 0;
//        }
//        else  if (*p != ' ')
//        {
//            k = 1;   *p = toupper(*p);
//        }
//}
//
//void main()//10-6
//{
//    char   chrstr[81];
//    system("cls");
//    printf("\nPlease enter an English text line: ");   gets(chrstr);
//    printf("\n\nBefore changing:\n  %s", chrstr);
//    upfst(chrstr);
//    printf("\nAfter changing:\n  %s\n", chrstr);
//}

//#include  <stdio.h>
//#define M 3
//#define N 5
//void fun(int(*a)[N], int k)
//{
//    int i, j, p, temp;
//    /**********FILL**********/
//    for (p = 1; p <= k; p++)
//        for (i = 0; i < M; i++)
//        {
//            temp = a[i][0];
//            /**********FILL**********/
//            for (j = 0; j < N-1; j++) a[i][j] = a[i][j + 1];
//            /**********FILL**********/
//            a[i][N - 1] = temp;
//        }
//}
//main()//10-5
//{
//    int x[M][N] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} }, i, j;
//    printf("The array before moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//        printf("\n");
//    }
//    fun(x, 2);
//    printf("The array after moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//        printf("\n");
//    }
//}

//#include <conio.h>
//#include <stdio.h>
//#include <string.h>
//#include<windows.h>
//void fun(char* s, char t[])
//{
//    /**********  Begin  **********/
//    int p = strlen(s) - 1;
//    int i = 0;
//    for (i = 0; i <= p; i++)
//    {
//        if (s[i] % 2 == 0 && i % 2 != 0)
//        {
//            s[i] = 0;
//        }
//    }
//    for (i = 0; i <= p; i++)
//    {
//        if (*s)
//        {
//            *t++ = *s;
//        }
//        s++;
//    }
//    *t = 0;
//    /**********   End  ***********/
//
//}
//void main()//10-4
//{
//    char s[100], t[100];
//    system("cls");
//    printf("\nPlease enter string S:"); scanf("%s", s);
//    fun(s, t);
//    printf("\nThe result is:%s\n", t);
//}

//#include <stdio.h>
//#include <math.h>
//int  fun(int  n, int* value)
//{
//    int  d, s, i;
//    /**************Error**************/
//    d = 1;  s = 0;
//    for (i = 1; i <= 5; i++)  d = d * n;
//    *value = d;
//    for (i = 1; i <= 3; i++)
//    {
//        s = s + d % 10;
//        /**************Error**************/
//        d = d / 10;
//    }
//    return  s;
//}
//void main()//10-3
//{
//    int  n, sum, v;
//    do
//    {
//        printf("\nEnter n( 2<n<8):  "); scanf("%d", &n);
//    } while (n <= 2 || n >= 8);
//    sum = fun(n, &v);
//    printf("\n\nThe result:\n  value=%d  sum=%d\n\n", v, sum);
//}

//#include <stdlib.h>
//#include <stdio.h>
//#define N 10
//double fun(double x[], double* y)
//{
//    int i, j; double av;
//    /**********FILL**********/
//    av = 0.0;
//    /**********FILL**********/
//    for (i = 0; i < N; i++) av = av + x[i]/N;
//    for (i = j = 0; i < N; i++)
//        /**********FILL**********/
//        if (x[i] > av) y[j++] = x[i];
//    y[j] = -1;
//    return av;
//}
//void main()//10-2
//{
//    int i; double x[N], y[N];
//    for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
//    printf("\n");
//    printf("\nThe average is: %f\n", fun(x, y));
//    for (i = 0; y[i] >= 0; i++) printf("%5.1f ", y[i]);
//    printf("\n");
//}

//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h> 
//void fun(int  a[], int  n, int* max, int* d)
//{
//
//    /**********  Begin  **********/
//    int i = 0;
//    *max = a[0];
//    *d = 0;
//    for(i=1;i<n;i++)
//    if (*max < a[i])
//    {
//        *max = a[i];
//        *d = i;
//    }
//    /**********   End  ***********/
//
//}
//void main()//10-1
//{
//    int i, x[20], max, index, n = 10;
//    srand(time(0));
//    for (i = 0; i < n; i++) { x[i] = rand() % 50; printf("%4d", x[i]); }
//    printf("\n");
//    fun(x, n, &max, &index);
//    printf("Max =%5d ,  Index =%4d\n", max, index);
//}

//int main() 
//{
//	int x[]={ 1,3,5,7,2,4,6,0 }, i, j, k; 
//	for (i = 0; i < 3; i++)
//		for (j = 2; j >= i;j--)
//			if (x[j + 1] > x[j]) 
//			{ 
//				k = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = k; 
//			}
//	for (i = 0; i < 3; i++)
//		for (j = 4;j < 7 - i;j++)
//			if (x[j + 1] > x[j]) 
//			{
//				k = x[j]; 
//				x[j] = x[j + 1]; 
//				x[j + 1] = k; 
//			}
//	for (i = 0; i < 3; i++)
//		for (j = 4; j < 7 - i;j++)
//			if (x[j] > x[j + 1]) 
//			{ 
//				k = x[j]; 
//				x[j] = x[j + 1];
//				x[j + 1] = k; 
//			}
//	for (i = 0; i < 8; i++) 
//		printf("%d", x[i]);
//
//	printf("\n");
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//char a[5][10] = { "beijing"," china" ,"tiananmen" ,"welcome" ,"you" };
//	char a[5][10] = { "china"," beijing" ,"you" ,"tiananmen" ,"welcome" };
//	int i, j;
//	char t[10];
//	for (i = 0; i < 4; i++)
//		for (j = i + 1; j < 5; j++)
//			if (strcmp(a[i], a[j]) > 0)
//			{
//				strcpy(t, a[i]);
//				strcpy(a[i], a[j]);
//				strcpy(a[j], t);
//			}
//	puts(a[3]);
//	return 0;
//}

//int main()
//{
//	char a[20], b[20], c[20]; 
//	scanf("%s%s", a, b); 
//	gets(c);
//	printf("%s%s%s\n", a, b, c);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a[2][3] = { 0 };
//	a[1 > 2][!1] = 1;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
//	}
//	return 0;
//}

//void ZZ(int* n1, int* n2, int* n3)
//{
//	int tmp = 0;
//	if (*n1 > *n2)
//	{
//		tmp = *n1;
//		*n1 = *n2;
//		*n2 = tmp;
//	}
//	if (*n1 > *n3)
//	{
//		tmp = *n1;
//		*n1 = *n3;
//		*n3 = tmp;
//	}
//	if (*n2 > *n3)
//	{
//		tmp = *n2;
//		*n2 = *n3;
//		*n3 = tmp;
//	}
//}
//int main()//p291ϰ��1
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	printf("input three integer n1,n2,n3:");
//	scanf("%d,%d,%d", &n1, &n2, &n3);
//	ZZ(&n1, &n2, &n3);
//	printf("Now,the order is:%d,%d,%d", n1, n2, n3);
//
//	return 0;
//}

//#include<string.h>
//void YY(char* str1, char* str2)
//{
//	char p[10] = { 0 };
//	strcpy(p, str1);
//	strcpy(str1, str2);
//	strcpy(str2, p);
//
//}
//void ZZ(char* arr1, char* arr2, char* arr3)
//{
//	if (strcmp(arr1, arr2) > 0)
//	{
//		YY(arr1, arr2);
//	}
//	if (strcmp(arr1, arr3) > 0)
//	{
//		YY(arr1, arr3);
//	}	
//	if (strcmp(arr2, arr3) > 0)
//	{
//		YY(arr1, arr2);
//	}
//}
//int main()//p291ϰ��2
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	char arr3[10] = { 0 };
//	printf("input three line:\n");
//	gets(arr1);
//	gets(arr2);
//	gets(arr3);
//	ZZ(arr1, arr2, arr3);
//	printf("Now,the order is:");
//	printf("\n%s\n%s\n%s\n", arr1, arr2, arr3);
//
//	return 0;
//}

//void XX(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//void YY(int* arr)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (*arr > *(arr + i))
//		{
//			tmp = *arr;
//			*arr = *(arr + i);
//			*(arr + i) = tmp;
//		}
//		if (*(arr + 9) < *(arr + i))
//		{
//			tmp = *(arr + 9);
//			*(arr + 9) = *(arr + i);
//			*(arr + i) = tmp;
//		}
//	}
//}
//void ZZ(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()//p291ϰ��3
//{
//	int arr[10] = { 0 };
//	printf("input 10 number:");
//	XX(arr);
//	YY(arr);
//	printf("Now,they are:");
//	ZZ(arr);
//
//	return 0;
//}

//void ZZ(int* arr, int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (j = 0; j < b; j++)
//	{
//		tmp = *(arr + a - 1);
//		for (i = a - 1; i > 0; i--)
//		{
//			*(arr + i) = *(arr + i - 1);
//		}
//		*arr = tmp;
//	}
//	//ע�⣺��ϰʱ����Ҳ����ʹ�õݹ��˼��
//	//������forѭ����Ϊ
//	//b--;
//	//if (b > 0)
//	//{
//	//	ZZ(arr, a, b);
//	//}
//	//ʹ�ú�����תb�μ���
//}
//int main()//p291ϰ��4
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int arr[20] = { 0 };
//	printf("������������Ԫ�صĸ�����");
//	scanf("%d", &a);
//	printf("������%d������:\n",a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	printf("�������ƶ������ݵĸ�����");
//	scanf("%d", &b);
//	ZZ(arr, a, b);
//	printf("�ƶ�������Ϊ:\n");
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int ZZ(int a)
//{
//	int i = 0;
//	char arr[30] = { 0 };
//	int count = 0;//��¼1��3������
//	int c2 = a;//��¼ʣ��δ����̭����
//	while (c2 > 1)
//	{
//		for (i = 0; i < a; i++)
//		{
//			if (*(arr + i) != 3)
//			{
//				count++;
//				*(arr + i) = count;
//			}
//			if (count == 3)
//			{
//				count = 0;
//				c2--;
//			}
//		}
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		if (*(arr + i) != 3)
//		{
//			return i+1;
//		}
//	}
//}
//int main()//p291ϰ��5
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:");
//	scanf("%d", &a);
//	b = ZZ(a);
//	printf("ʣ�µ�Ԫ�صı��Ϊ��%d", b);
//
//	return 0;
//}

//int ZZ(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()//p292ϰ��6
//{
//	int a = 0;
//	char arr[30] = { 0 };
//	printf("input string:");
//	gets(arr);
//	a = ZZ(arr);
//	printf("The length of string is %d\n", a);
//
//	return 0;
//}

//void* copy(char* arr,char* arr1,int a)
//{
//	int i = 0;
//	a--;
//	for (i = 0; i < a; i++)
//	{
//		arr++;
//	}
//	while (*arr)
//	{
//		*arr1++ = *arr++;
//	}
//}
//int main()//p292��7��
//{
//	char arr[30] = { 0 };
//	char arr1[30] = { 0 };
//	int a = 0;
//	char* p = NULL;
//	printf("������һ���ַ���:");
//	gets(arr);
//	printf("�����뿪ʼ�������ַ�����ţ�");
//	scanf("%d", &a);
//	copy(arr, arr1, a);
//	printf("��������Ϊ:%s\n", arr1);
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}
//
//struct S
//{
//	int a : 2;
//	int b : 4;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//struct s
//{
//	int data;
//	int num;
//};
//void print1(struct s s)
//{
//	printf("%d,%d\n", s.data, s.num);
//}
//void print2(struct s* ps)
//{
//	printf("%d,%d\n", ps->data, ps->num);
//}
//int main()
//{
//	struct s s = { 0,2 };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

//void ZZ(char* arr1, char* arr2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*arr1 == 'a' || *arr1 == 'e' || *arr1 == 'i' || *arr1 == 'o' || *arr1 == 'u' ||
//			*arr1 == 'A' || *arr1 == 'E' || *arr1 == 'I' || *arr1 == 'O' || *arr1 == 'U')
//		{
//			*arr2 = *arr1;
//			arr2++;
//		}
//		arr1++;
//	}
//}
//int main()//p216ϰ��7
//{
//	char arr1[50] = { 0 };
//	char arr2[50] = { 0 };
//	printf("������һ���ַ���:");
//	gets(arr1);
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	ZZ(arr1,arr2,sz);
//	printf("�ַ����е�Ԫ����ĸ����:%s\n", arr2);
//
//	return 0;
//}

//void ZZ(char* arr1, char* arr2)
//{ 
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[30] = { 0 };
//	printf("�������һ���ַ�����");
//	gets(arr1);
//	printf("������ڶ����ַ�����");
//	gets(arr2);
//	ZZ(arr1, arr2);
//	printf("\n���Ӻ��ַ���Ϊ %s\n", arr1);
//
//	return 0;
//}

//void ZZ(char* arr)
//{
//	char tmp = 0;
//	char* ret = arr;
//	while (*ret)
//	{
//		ret++;
//	}
//	ret--;
//	while (arr < ret)
//	{
//		tmp = *arr;
//		*arr = *ret;
//		*ret = tmp;
//		arr++;
//		ret--;
//	}
//}
//int main()//p216ϰ��5
//{
//	char arr[30] = { 0 };
//	printf("������һ���ַ�����");
//	scanf("%s", arr);
//	printf("\n");
//	ZZ(arr);
//	printf("    ת������ַ�����%s\n", arr);
//
//	return 0;
//}

//void ZZ(int arr[3][3], int x, int y)
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = i+1; j < y; j++)
//		{
//			tmp= arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//		
//	}
//	
//}
//int main()//p126ϰ��4
//{
//	int i = 0;
//	int arr[3][3] = { 0 };
//	printf("������3��3�е���������:\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	}
//	ZZ(arr, 3, 3);
//	printf("ת��������:\n");
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int c1, c2, c3;
//void fun(long n)
//{
//	c1 = c2 = c3 = 0;
//	while (n)
//	{
//		/**********FILL**********/
//		switch (n%10)
//		{
//		/**********FILL**********/
//		case 1:   c1++; break;
//		/**********FILL**********/
//		case 2:   c2++; break;
//		case 3:   c3++;
//		}
//		n /= 10;
//	}
//}
//main()//��7��
//{
//	long n = 123114350L;
//	fun(n);
//	printf("\nThe result :\n");
//	printf("n=%1d c1=%d c2=%d c3=%d\n", n, c1, c2, c3);
//}

//#include<stdio.h>
//#include<conio.h>
//#define M 3
//#define N 4
//
//void fun(int tt[M][N], int pp[N])
//{
//	/**********Begin**********/
//	int j = 0;
//	for (j = 0; j < N; j++)
//	{
//		int i = 0;
//		int tmp = tt[i][j];
//		for (i = 0; i < M; i++)
//		{
//			if (tmp > tt[i][j])
//			{
//				tmp = tt[i][j];
//			}
//		}
//		*pp = tmp;
//		pp++;
//	}
//	/**********Begin**********/
//}
//void main()//��6��
//{
//	int t[M][N] = { {22,45,56,30},{19,33,45,38},{20,22,66,40} };
//	int p[N], i, j, k;
//	printf("The original data is:\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//			printf("%6d", t[i][j]);
//		printf("\n");
//	}
//	fun(t, p);
//	printf("\nThe result is:\n");
//	for (k = 0; k < N; k++)printf("%4d", p[k]);
//	printf("\n");
//	getchar(); getchar();
//}

//#include<stdio.h>
//#include<string.h>
//#define M 81
//int fun(char ss[], char c)
//{
//	/**********Begin**********/
//	int count = 0;
//	while (*ss++)
//	{
//		if (*ss == c)
//		{
//			count++;
//		}
//	}
//	return count;
//	/**********Begin**********/
//}
//void main()//��5��
//{
//	char a[M],ch;
//	printf("\nPlease enter a string:");
//	gets(a);
//	printf("\nPlease enter a char:");
//	ch = getchar();
//	printf("\nThe number of the char is: %d\n", fun(a, ch));
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("С��\n");
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int x = 011;
//	printf("%d\n", ++x);
//
//	return 0;
//}

//int gy(int m, int n)
//{
//    int r = 0;
//    if ((r = m % n) == 0)
//        return n;
//    else
//    {
//        return gy(n,r);
//    }
//}
//int main()//��6��
//{
//	int m = 0;
//    int n = 0;
//    printf("������������������");
//    scanf("%d,%d",&m,&n);
//    printf("%d,%d�����Լ���ǣ�%d\n",m,n,gy(m,n));
//
//	return 0;
//}

//int tj(long long num,int* arr)
//{
//	while (num != 0)
//	{
//		int count = num % 10;
//		arr[count]++;
//		num /= 10;
//	}
//}
//int main()//��5��
//{
//	int i = 0;
//	long long num = 0;
//	int arr[10] = { 0 };
//    printf("������һ��10������:");
//    scanf("%lld",&num);
//	tj(num,arr);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("����%d�ĸ�������%d��\n", i, arr[i]);
//		}
//	}
//
//	return 0;
//}

//int hws(char* arr)
//{
//    char* r = arr;
//    char* k = arr;
//    while (*k != '\0')
//    {
//        k++;
//    }
//    k--;
//    while (r <= k)
//    {
//        if (*r == *k)
//        {
//            r++;
//            k--;
//        }
//        else
//            return 0;
//    }
//    return 1;
//}
//int main()//��4��
//{
//    char arr[10] = { 0 };
//    printf("������һ��10������:");
//    scanf("%s",&arr);
//    if (hws(arr) == 1)
//    {
//        printf("%s�ǻ�����!\n", arr);
//    }
//    else
//    {
//        printf("%s���ǻ�����!\n", arr);
//    }
//
//    return 0;
//}

//void kg(char arr[])
//{
//    int i = 0;
//    for (i = 4; i > 0; i--)
//    {
//        arr[2 * i] = arr[i];
//        arr[2 * i - 1] = ' ';
//    }
//}
//int main()//p216ϰ���8�⣨��3�⣩
//{
//    char arr[10] = { 0 };
//    printf("������һ��10��������:");
//    scanf("%s",&arr);
//    printf("\n");
//    kg(arr);
//    printf("ת������Ϊ��%s", arr);
//
//    return 0;
//}

//int gy(int m,int n)
//{
//    int r = 0;
//    while(r=m%n)
//    {
//        m=n;
//        n=r;
//    }
//    return n;
//}
//int gb(int m,int n)
//{
//    int i = 0;
//    i = gy(m, n);
//    i = m * n / i;//��С��������������֮���������Լ��
//}
//int main()//p215ϰ���1�⣨��1�⣩
//{
//    int m = 0;
//    int n = 0;
//    printf("������������������");
//    scanf("%d,%d",&m,&n);
//    printf("%d,%d�����Լ���ǣ�%d\n",m,n,gy(m,n));
//    printf("%d,%d����С�������ǣ�%d\n",m,n,gb(m,n));
//
//    return 0;
//}

//#include<math.h>
//int is_prime(int i)
//{
//    int j = 0;
//    for(j=2; j <= sqrt(i); j++)
//    {
//        if(i % j == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()//p215ϰ���3�⣨��2�⣩
//{
//    int i = 0;
//    printf("������һ����������");
//    scanf("%d",&i);
//    if(is_prime(i) == 1)
//        printf("%d��������\n",i);
//    else if(is_prime(i) == 0)
//        printf("%d����������\n",i);
//
//    return 0;
//}

//int Fib(int n)//��7��
//{
//    if(n<=2)
//        return 1;
//     else
//        return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    printf("������nֵ��");
//    scanf("%d",&n);
//    ret = Fib(n);
//    printf("쳲��������е�%d���ֵ�� % d\n",n,ret);
//
//    return 0;
//}

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