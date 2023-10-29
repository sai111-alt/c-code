#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele);
//	printf("%s\n", s.sex);
//}
//void print2(Stu* s)
//{
//	printf("%s\n", s->name);
//	printf("%d\n", s->age);
//	printf("%s\n", s->tele);
//	printf("%s\n", s->sex);
//}
//
//int main()
//{
//	Stu s = { "ÀîËÄ",40,"12345678901","ÄÐ" };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello";
//	char* p = arr;
//	printf("%s", p);
//
//	return 0;
//}

//typedef struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//}S;
//struct T
//{
//	char ch[10];
//	S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//
//	return 0;
//}