#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

void test()
{
	int ch = 0;
	do
	{
		system("cls");
		//创建贪吃蛇
		Snake snake = { 0 };

		//初始化游戏
		GameStart(&snake);

		//运行游戏
		GameRun(&snake);

		//结束游戏
		GameEnd(&snake);
		SetPos(30, 15);
		printf("再来一局吗?(Y/N):");
		SetPos(30, 16);
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'y' || ch == 'Y');
	SetPos(0, 27);
}



int main()
{
	//设置适配本地化环境
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();

	return 0;
}