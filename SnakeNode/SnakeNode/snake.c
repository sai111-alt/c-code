#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

void SetPos(short x, short y)//���λ������
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD ps = { x,y };
	SetConsoleCursorPosition(houtput, ps);
}

void WelcomeToGame()//��ӭ����͹��ܽ��ܴ�ӡ
{
	SetPos(35, 14);
	wprintf(L"��ӭ������������̰����С��Ϸ\n");
	SetPos(42, 25);
	system("pause");
	system("cls");
	SetPos(24, 12);
	wprintf(L"�� �� . �� .�� . �� �ֱ�����ߵ��ƶ���F3Ϊ���٣�F4Ϊ����\n");
	SetPos(40, 16);
	wprintf(L"�����ܻ�ø��ߵķ���\n");
	SetPos(42, 25);
	system("pause");
	system("cls");
}

void CreateMap()//��ͼ����
{
	int i = 0;
	for (i = 0; i < 29; i++)//��ӡ��ǽ
	{
		wprintf(L"%lc", WALL);
	}
	SetPos(0, 26);
	for (i = 0; i < 29; i++)//��ӡ��ǽ
	{
		wprintf(L"%lc", WALL);
	}
	for (i = 1; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);//��ӡ��ǽ
		SetPos(56, i);
		wprintf(L"%lc", WALL);//��ӡ��ǽ
	}
}

void InitSnake(pSnake ps)//��ʼ����
{
	//����
	int i = 0;
	pSnakeNode cur = NULL;

	for (i = 0; i < 5; i++)
	{
		cur = (pSnakeNode)malloc(sizeof(SnakeNode));
		if (cur == NULL)
		{
			perror("InitSnake()::malloc()");
			return;
		}
		cur->next = NULL;
		cur->x = POS_X + 2 * i;
		cur->y = POS_Y;

		//ʹ��ͷ�巨��������
		if (ps->_pSnake == NULL)//������ִ��
		{
			ps->_pSnake = cur;
		}
		else//�ǿ�����ִ��
		{
			cur->next = ps->_pSnake;
			ps->_pSnake = cur;
		}
	}
	cur = ps->_pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	//�ߵ���������
	ps->_dir = RIGHT;
	ps->_status = OK;
	ps->_food_weight = 10;
	ps->_score = 0;
	ps->_sleep_time = 200;
}

void CreatFood(pSnake ps)//��ʼ��ʳ��
{
	int x = 0;
	int y = 0;
again:
	do
	{
		x = rand() % 53 + 2;//x������2~54ǽ��֮��
		y = rand() % 25 + 1;//y������1~25ǽ��֮��
	} while (x % 2 != 0);//x������2�ı���

	pSnakeNode cur = ps->_pSnake;
	while (cur)//xy���겻�ܺ����������ظ�
	{
		if (x == cur->x && y == cur->y)
		{
			goto again;
		}
		cur = cur->next;
	}

	//����ʳ��Ľڵ�
	pSnakeNode pFood = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pFood == NULL)
	{
		perror("CreatFood():malloc()");
		return;
	}
	pFood->x = x;
	pFood->y = y;
	pFood->next = NULL;
	SetPos(x, y);
	wprintf(L"%lc", FOOD);
	ps->_pFood = pFood;
}

void GameStart(pSnake ps)//��Ϸ��ʼ��
{
	//1.���Ĵ��ڴ�С�ʹ��ڱ���
	system("mode con cols=100 lines=30");
	system("title ̰����");
	//2.���ع��
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info = { 0 };
	GetConsoleCursorInfo(houtput, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(houtput, &cursor_info); 
	//3.��ӭ����͹��ܽ��ܴ�ӡ
	WelcomeToGame();
	//4.��ͼ���� 
	CreateMap();
	//5.��ʼ����
	InitSnake(ps);
	//6.��ʼ��ʳ��
	CreatFood(ps);
}

#define KEY_PRESS(vk) (GetAsyncKeyState(vk) & 1 ? 1 : 0)
void EatFood(pSnakeNode pn, pSnake ps)
{
	//ͷ�巨
	ps->_pFood->next = ps->_pSnake;
	ps->_pSnake = ps->_pFood;

	free(pn);
	pn = NULL;
	
	//���´�ӡ��
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	ps->_score += ps->_food_weight;

	//���´���ʳ��
	CreatFood(ps);
}

void NotFood(pSnakeNode pn, pSnake ps)
{
	//ͷ�巨
	pn->next = ps->_pSnake;
	ps->_pSnake = pn;

	pSnakeNode cur = ps->_pSnake;
	while (cur->next->next != NULL)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}

	//�����һ���ڵ��ӡΪ�ո�
	SetPos(cur->next->x, cur->next->y);
	printf("  ");

	//�ͷŵ����һ���ڵ㲢�����������ڵ��next��ΪNULL
	free(cur->next);
	cur->next = NULL;
}

void KillByWall(pSnake ps)
{
	if (ps->_pSnake->x == 0 || ps->_pSnake->x == 56 ||
		ps->_pSnake->y == 0 || ps->_pSnake->y == 26)
	{
		ps->_status = KILL_BY_WALL;
	}
}

void KillBySelf(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake->next;
	while (cur)
	{
		if (cur->x == ps->_pSnake->x && cur->y == ps->_pSnake->y)
		{
			ps->_status = KILL_BY_SELF;
			break;
		}
		cur = cur->next;
	}
}

//�ߵ��ƶ�
void SnakeMove(pSnake ps)
{
	pSnakeNode pNextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (pNextNode == NULL)
	{
		perror("SnakeMove()::malloc()");
		return;
	}
	switch (ps->_dir)
	{
	case UP:
		pNextNode->x = ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y - 1; 
		break;
	case DOWN:
		pNextNode->x = ps->_pSnake->x;
		pNextNode->y = ps->_pSnake->y + 1;
		break;
	case LEFT:
		pNextNode->x = ps->_pSnake->x - 2;
		pNextNode->y = ps->_pSnake->y;
		break;
	case RIGHT:
		pNextNode->x = ps->_pSnake->x + 2;
		pNextNode->y = ps->_pSnake->y;
		break;
	}

	//�����һ�������Ƿ���ʳ��
	if (ps->_pFood->x == pNextNode->x && ps->_pFood->y == pNextNode->y)
	{
		EatFood(pNextNode, ps);
	}
	else
	{
		NotFood(pNextNode, ps);
	}

	//����Ƿ�ײǽ
	KillByWall(ps);

	//������Ƿ�ײ���Լ� 
	KillBySelf(ps);

}

//��Ϸ���е��߼�
void GameRun(pSnake ps)
{
	//��ӡ������Ϣ
	SetPos(62, 14);
	wprintf(L"%ls", L"���ܴ�ǽ������ҧ���Լ�");
	SetPos(62, 15);
	wprintf(L"%ls", L"�� �� . �� .�� . �� �ֱ�����ߵ��ƶ�");
	SetPos(62, 16);
	wprintf(L"%ls", L"F3Ϊ���٣�F4Ϊ����");
	SetPos(62, 17);
	wprintf(L"%ls", L"ESC�˳���Ϸ��Space��ͣ��Ϸ");
	SetPos(62, 19);
	wprintf(L"%ls", L"@��������");
	//��ⰴ��
	do
	{
		//��ӡ�ܷ�����ʳ��ķ�ֵ
		SetPos(62, 9);
		printf("�ܷ�����%d\n", ps->_score);
		SetPos(62, 10);
		printf("��ǰʳ��ķ�����%2d\n", ps->_food_weight);

		if (KEY_PRESS(VK_UP) && ps->_dir != DOWN)
		{
			ps -> _dir = UP;
		}
		else if (KEY_PRESS(VK_DOWN) && ps->_dir != UP)
		{
			ps->_dir = DOWN;
		}
		else if (KEY_PRESS(VK_LEFT) && ps->_dir != RIGHT)
		{
			ps->_dir = LEFT;
		}
		else if (KEY_PRESS(VK_RIGHT) && ps->_dir != LEFT)
		{
			ps->_dir = RIGHT;
		}
		else if (KEY_PRESS(VK_SPACE))
		{
			while (1)
			{
				if (KEY_PRESS(VK_SPACE))
				{
					break;
				}
				Sleep(200);
			}
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->_status= END_NORMAL;
		}
		else if (KEY_PRESS(VK_F3))
		{
			if (ps->_sleep_time > 80)
			{
				ps->_sleep_time -= 30;
				ps->_food_weight += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			if (ps->_food_weight > 2)
			{
				ps->_sleep_time += 30;
				ps->_food_weight -= 2;
			}
		}

		SnakeMove(ps);//����һ���Ĺ���
		Sleep(ps->_sleep_time);
	} while (ps->_status == OK);
}

//��Ϸ����
void GameEnd(pSnake ps)
{
	SetPos(30, 14);
	switch (ps->_status)
	{
	case END_NORMAL:
		printf("������Ϸ\n");
		break;
	case KILL_BY_SELF:
		printf("�����ײ���Լ���\n");
		break;
	case KILL_BY_WALL:
		printf("�����ײ��ǽ��\n");
		break;
	}

	//�ͷ�����
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}

}