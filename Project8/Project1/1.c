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
//int main()//p291习题1
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
//int main()//p291习题2
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
//int main()//p291习题3
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
//	//注意：复习时这里也可以使用递归的思想
//	//把外层的for循环改为
//	//b--;
//	//if (b > 0)
//	//{
//	//	ZZ(arr, a, b);
//	//}
//	//使用函数旋转b次即可
//}
//int main()//p291习题4
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int arr[20] = { 0 };
//	printf("请输入数组中元素的个数：");
//	scanf("%d", &a);
//	printf("请输入%d个整数:\n",a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	printf("请输入移动的数据的个数：");
//	scanf("%d", &b);
//	ZZ(arr, a, b);
//	printf("移动后数据为:\n");
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
//	int count = 0;//记录1到3的数字
//	int c2 = a;//记录剩余未被淘汰的数
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
//int main()//p291习题5
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入总人数:");
//	scanf("%d", &a);
//	b = ZZ(a);
//	printf("剩下的元素的编号为：%d", b);
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
//int main()//p292习题6
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
//int main()//p292第7题
//{
//	char arr[30] = { 0 };
//	char arr1[30] = { 0 };
//	int a = 0;
//	char* p = NULL;
//	printf("请输入一个字符串:");
//	gets(arr);
//	printf("请输入开始拷贝的字符串编号：");
//	scanf("%d", &a);
//	copy(arr, arr1, a);
//	printf("拷贝后结果为:%s\n", arr1);
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
//int main()//p216习题7
//{
//	char arr1[50] = { 0 };
//	char arr2[50] = { 0 };
//	printf("请输入一个字符串:");
//	gets(arr1);
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	ZZ(arr1,arr2,sz);
//	printf("字符串中的元音字母包括:%s\n", arr2);
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
//	printf("请输入第一个字符串：");
//	gets(arr1);
//	printf("请输入第二个字符串：");
//	gets(arr2);
//	ZZ(arr1, arr2);
//	printf("\n连接后字符串为 %s\n", arr1);
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
//int main()//p216习题5
//{
//	char arr[30] = { 0 };
//	printf("请输入一个字符串：");
//	scanf("%s", arr);
//	printf("\n");
//	ZZ(arr);
//	printf("    转换后的字符串：%s\n", arr);
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
//int main()//p126习题4
//{
//	int i = 0;
//	int arr[3][3] = { 0 };
//	printf("请输入3行3列的整形数组:\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	}
//	ZZ(arr, 3, 3);
//	printf("转换后数组:\n");
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
//main()//第7题
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
//void main()//第6题
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
//void main()//第5题
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
//int main()//第6题
//{
//	int m = 0;
//    int n = 0;
//    printf("请输入两个正整数：");
//    scanf("%d,%d",&m,&n);
//    printf("%d,%d的最大公约数是：%d\n",m,n,gy(m,n));
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
//int main()//第5题
//{
//	int i = 0;
//	long long num = 0;
//	int arr[10] = { 0 };
//    printf("请输入一个10进制数:");
//    scanf("%lld",&num);
//	tj(num,arr);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("数字%d的个数共有%d个\n", i, arr[i]);
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
//int main()//第4题
//{
//    char arr[10] = { 0 };
//    printf("请输入一个10进制数:");
//    scanf("%s",&arr);
//    if (hws(arr) == 1)
//    {
//        printf("%s是回文数!\n", arr);
//    }
//    else
//    {
//        printf("%s不是回文数!\n", arr);
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
//int main()//p216习题第8题（第3题）
//{
//    char arr[10] = { 0 };
//    printf("请输入一个10进制整数:");
//    scanf("%s",&arr);
//    printf("\n");
//    kg(arr);
//    printf("转换后结果为：%s", arr);
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
//    i = m * n / i;//最小公倍数等于两数之积除以最大公约数
//}
//int main()//p215习题第1题（第1题）
//{
//    int m = 0;
//    int n = 0;
//    printf("请输入两个正整数：");
//    scanf("%d,%d",&m,&n);
//    printf("%d,%d的最大公约数是：%d\n",m,n,gy(m,n));
//    printf("%d,%d的最小功倍数是：%d\n",m,n,gb(m,n));
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
//int main()//p215习题第3题（第2题）
//{
//    int i = 0;
//    printf("请输入一个正整数：");
//    scanf("%d",&i);
//    if(is_prime(i) == 1)
//        printf("%d是素数。\n",i);
//    else if(is_prime(i) == 0)
//        printf("%d不是素数。\n",i);
//
//    return 0;
//}

//int Fib(int n)//第7题
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
//    printf("请输入n值：");
//    scanf("%d",&n);
//    ret = Fib(n);
//    printf("斐波那契数列第%d项的值： % d\n",n,ret);
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

//int main()//P165习题8
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int max = 0;//放鞍点
//	int line = 0;//放鞍点的行号
//	int column = 0;//放鞍点的列号
//	int count = 0;//计数
//	int count2 = 0;//计数：若某行鞍点不存在，则++
//	int arr[4][5] = { 0 };
//	printf("请输入二维数组<4行5列>：\n");
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		max = arr[i][0];//必须将max置为某元素，假设二维元素全是负数，而max为0，会存在错误
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				line = i;
//				column = j;
//			}
//		}
//		//此时max是这一行最大的数了,再将它和所在列的数做比较
//		for (p = 0; p < 4; p++)
//		{
//			if (max <= arr[p][column])
//			{
//				count++;
//			}
//			if (4 == count)//如果max是此列最小，则count为4
//			{
//				printf("鞍点值：%d,行号：%d,列号：%d\n", max, line, column);
//			}
//
//		}
//		if (4 != count)
//		{
//			count2++;
//		}
//		count = 0;
//	}
//	if (4 == count2)//当4行都没有鞍点时，则count2为4
//	{
//		printf("该二维数组不存在鞍点\n");
//	}
//	return 0;
//}

//int main()//P165习题第6题
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

//int main()//P165习题第5题
//{
//	int i = 0;
//	int arr[] = { 8,6,3,5,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz为元素个数
//	printf("未处理前的数组 a:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	printf("交换后的数组 a:\n");
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

//int main()//P165习题第4题
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int arr[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;//sz为最后的元素下标
//	printf("原数组 a:\n");
//	for (i = 0; i <= sz-1; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	printf("请输入要插入的数据:");
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
//	printf("插入后数组 a:\n");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<math.h>
//int main()//p165习题1
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i <= 100; i ++ )
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//非素数i都可以写成两个数相乘（非1*自身），其中必有一个数<=sqrt（i），找它即可
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
//int main()//p138习题16
//{
//	int i = 0;
//	int j = 0;
//	int p = 0;
//	int row_c = 0;
//	printf("请输入总行数（奇数）：");
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

//int main()//p138习题15
//{
//	double x1 = 0.0;//放左端值
//	double x2 = 0.0;//放右端值
//	double x3 = 0.0;//放中间值
//	double y1 = 0.0;//放左函数值
//	double y2 = 0.0;//放右函数值
//	double y3 = 0.0;//放中间函数值
//	printf("请输入工作区间x1和x2:");
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
//	printf("方程的根是：%lf\n", x3);
//
//	return 0;
//}

//int main()//p138习题14
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
//	printf("该方程的根是：%lf", x2);
//
//	return 0;
//}

//int main()//p138习题13
//{
//	double a = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//	printf("请输入一个正整数:");
//	scanf("%lf", &a);
//	x1 = a;
//	x2 = (1.0 / 2)*(x1 + a / x1);
//	do
//	{
//		x1 = x2;
//		x2 = (1.0 / 2) * (x1 + a / x1);
//	}while (fabs(x2 - x1) >= 1e-5);
//	printf("%.2lf的平方根是：%lf",a, x1);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()//p138习题16
//{
//	char arr1[] = "       ";
//	char arr2[] = "*******";
//	char arr3[] = "       ";
//	int mid = (strlen(arr1) - 1)/2;//奇数个字符组合的字符串长度-1后除2对应的字符下标即为中间的字符
//	int left = mid;//放向左边变化的字符下标
//	int right = mid;//放向右边变化的字符下标
//	while (left <= right)//当左边与右边相遇交叉时退出循环
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

//int main()//p138习题12
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= 9; i++ )
//	{
//		j = (j+1) * 2 ;
//	}
//	printf("第1天的桃子数是%d个\n", j);
//
//
//	return 0;
//}

//int main()//p138习题11
//{
//	int i = 0;
//	double j = 100.0;//用于求和
//	double k = 50.0;//用于除2
//	for (i = 1; i < 10; i++)//注意第10次落地只有9次循环
//	{
//		j = 2*k + j;
//		k = k / 2;
//	}
//	printf("第10次落地时共经过%lf米\n", j);
//	printf("第10次反弹%lf米\n", k);
//
//	return 0;
//}

//int main()//p137习题10
//{
//	int i = 0;
//	for (i = 1; i < 1000; i++)
//	{
//		int j = 0;
//		int l = 0;//放因子和
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