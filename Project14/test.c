#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play  0.exit*******\n");
	printf("****************************\n");
}
void game()//��Ϸ�ľ���ʵ��
{
	char borad[ROW][COL] = { 0 };//3x3��������������
	InitBoard(borad, ROW, COL);//��ʼ������
	DisplayBoard(borad, ROW, COL);//��ӡ����
}
void text()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
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