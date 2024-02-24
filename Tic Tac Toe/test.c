#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play  0.exit*******\n");
	printf("****************************\n");
}
void game()//游戏的具体实现
{
	char ret = 0;
	//ROW x COL数组存放棋盘数据
	char borad[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(borad, ROW, COL);
	//打印棋盘
	DisplayBoard(borad, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(borad, ROW, COL);
		DisplayBoard(borad, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(borad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(borad, ROW, COL);
		DisplayBoard(borad, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(borad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}