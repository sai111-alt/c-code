#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//InitBoard�����ǽ������ֵȫ����Ϊ�ո�ʹ�ô�ӡ���������Ӿ�Ч���ǿ�����
void InitBoard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//DisplayBoard�����þ��Ǵ�ӡ����
//��ʼ��������
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |    
void DisplayBoard(char board[ROW][COL], int row, int col);//��������
{

}