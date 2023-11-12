#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct s1
{
	char c1;
	int a;
	char c2;
};
struct s2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct s1 a = { 0 };
	struct s2 b = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));

	return 0;
}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
