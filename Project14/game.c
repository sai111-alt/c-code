#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//InitBoard作用是将数组的值全部置为空格，使得打印出来棋盘视觉效果是空棋盘
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

//DisplayBoard的作用就是打印棋盘
//初始棋盘如下
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |    
void DisplayBoard(char board[ROW][COL], int row, int col);//函数声明
{

}