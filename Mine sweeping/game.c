#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	printf("0|");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);//��ӡ�к�
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("--");//��ӡ�к�
	}

	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return
		mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y]+
		mine[x + 1][y - 1] - 8 * '0';
}

void ifmine(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);//������Χ�׵ĸ���
	show[x][y] = count + '0';
	if (show[x][y] == '0')
	{
		show[x][y - 1] =
			show[x - 1][y - 1] =
			show[x - 1][y] =
			show[x - 1][y + 1] =
			show[x][y + 1] =
			show[x + 1][y + 1] =
			show[x + 1][y] =
			show[x + 1][y - 1] = ' ';
		show[x][y] = '0';
		int a = rand() % 4 + 1;
		if (a == 1)
		{
			ifmine(show, mine, x, y - 1);
		}
		else if (a == 2)
		{
			ifmine(show, mine, x - 1, y);
		}
		else if (a == 3)
		{
			ifmine(show, mine, x, y + 1);
		}
		else
		{
			ifmine(show, mine, x + 1, y);
		}
	}
}

int Wineshow(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	if (count == EASY_COUNT)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������Ų��׵�����(x,y):>");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����,�׵Ĳ�������\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//û����
			{
				ifmine(show,mine,x,y);//�ж�
				system("cls");
				if (Wineshow(show, row, col)==1)
				{
					printf("��ϲ�㣬���׳ɹ�, �׵Ĳ�������,1��ʾ�ף�0��ʾ����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					DisplayBoard(show, row, col);
				}
			}
		}
		else
		{
			printf("��������Ƿ�������������:>\n");
		}
	}
}