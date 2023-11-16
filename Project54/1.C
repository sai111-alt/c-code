#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//union Un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}n;
//	n.i = 1;
//	return n.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("Ð¡¶Ë\n");
//	}
//	else
//	{
//		printf("´ó¶Ë\n");
//	}
//
//	return 0;
//}

//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//enum Color
//{
//	RED ,
//	GREEN = 2,
//	BLUE = 9
//};
//int main()
//{
//	//printf("%d %d %d \n", RED, GREEN, BLUE);
//	enum Color c=2;
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


//#pragma pack(8)
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//#pragma pack(1)
//struct s2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//
//	return 0;
//}

//#include<stddef.h>
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));
//
//	return 0;
//}

//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
//int main()
//{
//	struct s3 r;
//	struct s4 i;
//	printf("%d\n", sizeof(r));
//	printf("%d\n", sizeof(i));
//
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct s1 a = { 0 };
//	struct s2 b = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
