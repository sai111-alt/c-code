#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play  0.exit*******\n");
	printf("****************************\n");
}
void game()//游戏的具体实现
{
	char borad[ROW][COL] = { 0 };//3x3数组存放棋盘数据
	InitBoard(borad, ROW, COL);//初始化棋盘
	DisplayBoard(borad, ROW, COL);//打印棋盘
}
void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋\n");
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