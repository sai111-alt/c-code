#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

void test()
{
	int ch = 0;
	do
	{
		system("cls");
		//����̰����
		Snake snake = { 0 };

		//��ʼ����Ϸ
		GameStart(&snake);

		//������Ϸ
		GameRun(&snake);

		//������Ϸ
		GameEnd(&snake);
		SetPos(30, 15);
		printf("����һ����?(Y/N):");
		SetPos(30, 16);
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'y' || ch == 'Y');
	SetPos(0, 27);
}



int main()
{
	//�������䱾�ػ�����
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();

	return 0;
}