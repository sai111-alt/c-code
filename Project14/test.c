#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play  0.exit*******\n");
	printf("****************************\n");
}
void game()//��Ϸ�ľ���ʵ��
{
	char ret = 0;
	//ROW x COL��������������
	char borad[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(borad, ROW, COL);
	//��ӡ����
	DisplayBoard(borad, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(borad, ROW, COL);
		DisplayBoard(borad, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(borad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(borad, ROW, COL);
		DisplayBoard(borad, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(borad, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}