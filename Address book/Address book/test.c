#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//function：
//1.可以存放1000个好友的信息，包括名字、电话、性别、住址、年龄
//2.可以增加好友信息
//3.可以删除指定名字的好友信息
//4.可以查找好友信息
//5.可以修改好友信息
//6.可以显示好友信息
//7.可以排序好友信息

void menu()
{
	printf("*********************************************\n");
	printf("******      1.add            2.del     ******\n");
	printf("******      3.search         4.modify  ******\n");
	printf("******      5.show           6.sort    ******\n");
	printf("******      0.exti                     ******\n");
	printf("*********************************************\n");

}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	}while(input);

	return 0;
}