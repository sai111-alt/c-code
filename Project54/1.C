#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stdlib.h>
int a = 0;
typedef struct node
{
	int v1;
	struct node* next;
}node;
node* createLink()
{
	node* head = NULL;
	node* p = NULL;
	node* q = NULL;
	int k = 1;
	int w = 1;
	while (k <= 100) {
		p = (node*)malloc(sizeof(node));
		p->v1 = k;
		if (w == 1)
		{
			head = p; 
			q = p; 
			w = 0;
		}
		else
		{
			q->next = p;
			q = p;
		}
		k = k + 10;
	}
	p->next = NULL;
	return head;
}
void my_printf(node* p)
{
	while (p != NULL)
	{
		printf("%5d", p->v1);
		p = p->next;
	}
}
node* my_delete(node* head)
{
	node* p = NULL;
	node* q = NULL;
	int k = 0;
	printf("\n请输入要删除的数据:");
	scanf("%d", &k);
	if (k < head->v1)
	{
		printf("删除失败，链表中无此数字\n");
		return head;
	}
	else if (k == head->v1)
	{
		p = head;
		head = head->next;
		free(p);
		a = 1;
		return head;
	}
	else
	{
		p = q = head;
		p = q->next;
		while (p != NULL && p->v1 <= k)
		{
			if (p->v1 == k)
			{
				q->next = p->next;
				free(p);
				a = 1;
				return head;
			}
			else
			{
				q = p;
				p = q->next;
			}
		}
		printf("删除失败，链表中无此数字\n");
		return head;
	}
}

int main()
{
	node* head = NULL;
	head = createLink();
	printf("原链表为\n");
	my_printf(head);
	head = my_delete(head);
	if (1 == a)
	{
		printf("\n删除结点后的链表为\n");
		my_printf(head);
	}
	

	return 0;
}

//#include<stdlib.h>
//typedef struct node
//{
//	int v1;
//	struct node* next;
//}node;
//node* createLink() 
//{
//	node* head = NULL;
//	node* p = NULL;
//	node* q = NULL;
//	int k = 1;
//	p = (node*)malloc(sizeof(node));
//	head = p; q = p;
//	while (k <= 100) {
//		p->v1 = k;
//		k = k + 10;
//		p = (node*)malloc(sizeof(node));
//		q->next = p; 
//		q = p;
//	}
//	p->next = NULL;
//	return head;
//}
//void my_printf(node* p)
//{
//	while (p -> next != NULL)
//	{
//		printf("%5d", p->v1);
//		p = p ->next;
//	}
//}
//node* my_insert(node* head)
//{
//	node* p1 = NULL;
//	node* p = NULL;
//	node* q = NULL;
//	int k = 0;
//	printf("请输入要插入的数据:");
//	scanf("%d", &k);
//	p1 = (node*)malloc(sizeof(node));
//	p1 -> v1 = k;
//	if (head->v1 >= k)
//	{
//		p1->next = head;
//		head = p1;
//		return head;
//	}
//	q = p = head;
//	while (p != NULL)
//	{
//		p = p->next;
//		if (p->next == NULL)
//		{
//			break;
//		}
//		if (p->v1 >= k)
//		{
//			q->next = p1;
//			p1 -> next = p;
//			return head;
//		}
//		q=p;
//	}
//	if (p->next == NULL)
//	{
//		q->next = p1;
//		p1->next = p;
//		return head;
//	}
//}
//
//int main()
//{
//	node* head = NULL;
//	head = createLink();
//	head = my_insert(head);
//	my_printf(head);
//
//	return 0;
//}

//#include<stdlib.h>
//typedef struct node
//{
//	int v1;
//	struct node* next;
//}node;
//node* createLink()
//{
//	node* head = NULL;
//	node* p = NULL;
//	node* q = NULL;
//	int k = 0;
//	printf("请输入第一个数据：");
//	scanf("%d", &k);
//	p = (node*)malloc(sizeof(node));
//	head = p;
//	q = p;
//	while (k != -9999)
//	{
//		p->v1 = k;
//		printf("请继续输入数据，输入-9999结束：");
//		scanf("%d", &k);
//		p = (node*)malloc(sizeof(node));
//		q->next = p;
//		q = p;
//	}
//	p->next = NULL;
//	return head;
//}
//void my_printf(node* p)
//{
//	while (p->next != NULL)
//	{
//		printf("%5d", p->v1);
//		p = p ->next;
//	}
//}
//
//int main()
//{
//	int k = 0;
//	node* head = NULL;
//	node* p = NULL;
//	head = createLink();
//	my_printf(head);
//	p = head;
//	printf("\n请输入要查找的数据：");
//	scanf("%d", &k);
//	while (p->next != NULL)
//	{
//		if (p->v1 >= k)
//		{
//			break;
//		}
//		else
//		{
//			p = p->next;
//		}
//	}
//	if (p->v1 == k)
//	{
//		printf("查找成功\n");
//	}
//	else
//	{
//		printf("查找失败\n");
//	}
//
//	return 0;
//}


//#include<stdlib.h>
//typedef struct node
//{
//	int v1;
//	struct node* next;
//}node;
//int main()   
//{
//	node* head = NULL;
//	node* p = NULL;
//	node* q = NULL;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		p = (node*)malloc(sizeof(node));
//		printf("请输入第%d个数据：", i);
//		scanf("%d", &p->v1);
//		if (i == 1)
//		{
//			head = p;
//			q = p;
//		}
//		else
//		{
//			q->next = p;
//			q = p;
//		}
//	}
//	p = head;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%5d", p->v1);
//		p = p->next;
//	}
//
//	return 0;
//}

//typedef struct node
//{
//	int v1;
//	struct node* next;
//}node;
//int main()
//{
//	node n1, n2;
//	node* head = &n1;
//	head->v1 = 99;
//	head->next = &n2;
//	head->next->v1 = 98;
//	printf("%d %d\n", n1.v1, n2.v1);
//
//	return 0;
//}

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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
