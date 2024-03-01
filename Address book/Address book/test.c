#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//function：
//1.可以存放若干个好友，其中好友信息包括名字、电话、性别、住址、年龄
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
	printf("******      5.show           6.save    ******\n");
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
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			//销毁通讯录-释放动态开辟的内存
			DestroyContact(&con);
			SaveContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	}while(input);

	return 0;
}