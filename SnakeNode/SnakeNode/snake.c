#define _CRT_SECURE_NO_WARNINGS 1

#include"snake.h"

void SetPos(short x, short y)//光标位置设置
{
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD ps = { x,y };
	SetConsoleCursorPosition(houtput, ps);
}

void WelcomeToGame()//欢迎界面和功能介绍打印
{
	SetPos(35, 14);
	wprintf(L"欢迎表弟来到表叔的贪吃蛇小游戏\n");
	SetPos(42, 25);
	system("pause");
	system("cls");
	SetPos(24, 12);
	wprintf(L"用 ↑ . ↓ .← . → 分别控制蛇的移动，F3为加速，F4为减速\n");
	SetPos(40, 16);
	wprintf(L"加速能获得更高的分数\n");
	SetPos(42, 25);
	system("pause");
	system("cls");
}

void CreateMap()//地图绘制
{
	int i = 0;
	for (i = 0; i < 29; i++)//打印上墙
	{
		wprintf(L"%lc", WALL);
	}
	SetPos(0, 26);
	for (i = 0; i < 29; i++)//打印下墙
	{
		wprintf(L"%lc", WALL);
	}
	for (i = 1; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);//打印左墙
		SetPos(56, i);
		wprintf(L"%lc", WALL);//打印右墙
	}
}

void InitSnake(pSnake ps)//初始化蛇
{
	//蛇身
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

		//使用头插法创建链表
		if (ps->_pSnake == NULL)//空链表执行
		{
			ps->_pSnake = cur;
		}
		else//非空链表执行
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
	//蛇的其他属性
	ps->_dir = RIGHT;
	ps->_status = OK;
	ps->_food_weight = 10;
	ps->_score = 0;
	ps->_sleep_time = 200;
}

void CreatFood(pSnake ps)//初始化食物
{
	int x = 0;
	int y = 0;
again:
	do
	{
		x = rand() % 53 + 2;//x必须在2~54墙体之内
		y = rand() % 25 + 1;//y必须在1~25墙体之内
	} while (x % 2 != 0);//x必须是2的倍数

	pSnakeNode cur = ps->_pSnake;
	while (cur)//xy坐标不能和蛇身坐标重复
	{
		if (x == cur->x && y == cur->y)
		{
			goto again;
		}
		cur = cur->next;
	}

	//创建食物的节点
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

void GameStart(pSnake ps)//游戏初始化
{
	//1.更改窗口大小和窗口标题
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	//2.隐藏光标
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info = { 0 };
	GetConsoleCursorInfo(houtput, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(houtput, &cursor_info); 
	//3.欢迎界面和功能介绍打印
	WelcomeToGame();
	//4.地图绘制 
	CreateMap();
	//5.初始化蛇
	InitSnake(ps);
	//6.初始化食物
	CreatFood(ps);
}

#define KEY_PRESS(vk) (GetAsyncKeyState(vk) & 1 ? 1 : 0)
void EatFood(pSnakeNode pn, pSnake ps)
{
	//头插法
	ps->_pFood->next = ps->_pSnake;
	ps->_pSnake = ps->_pFood;

	free(pn);
	pn = NULL;
	
	//重新打印蛇
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	ps->_score += ps->_food_weight;

	//重新创建食物
	CreatFood(ps);
}

void NotFood(pSnakeNode pn, pSnake ps)
{
	//头插法
	pn->next = ps->_pSnake;
	ps->_pSnake = pn;

	pSnakeNode cur = ps->_pSnake;
	while (cur->next->next != NULL)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}

	//将最后一个节点打印为空格
	SetPos(cur->next->x, cur->next->y);
	printf("  ");

	//释放掉最后一个节点并将倒数二个节点的next置为NULL
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

//蛇的移动
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

	//检测下一个坐标是否是食物
	if (ps->_pFood->x == pNextNode->x && ps->_pFood->y == pNextNode->y)
	{
		EatFood(pNextNode, ps);
	}
	else
	{
		NotFood(pNextNode, ps);
	}

	//检测是否撞墙
	KillByWall(ps);

	//检测蛇是否撞到自己 
	KillBySelf(ps);

}

//游戏运行的逻辑
void GameRun(pSnake ps)
{
	//打印帮助信息
	SetPos(62, 14);
	wprintf(L"%ls", L"不能穿墙，不能咬到自己");
	SetPos(62, 15);
	wprintf(L"%ls", L"用 ↑ . ↓ .← . → 分别控制蛇的移动");
	SetPos(62, 16);
	wprintf(L"%ls", L"F3为加速，F4为减速");
	SetPos(62, 17);
	wprintf(L"%ls", L"ESC退出游戏，Space暂停游戏");
	SetPos(62, 19);
	wprintf(L"%ls", L"@表叔特制");
	//检测按键
	do
	{
		//打印总分数和食物的分值
		SetPos(62, 9);
		printf("总分数：%d\n", ps->_score);
		SetPos(62, 10);
		printf("当前食物的分数：%2d\n", ps->_food_weight);

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

		SnakeMove(ps);//蛇走一步的过程
		Sleep(ps->_sleep_time);
	} while (ps->_status == OK);
}

//游戏结束
void GameEnd(pSnake ps)
{
	SetPos(30, 14);
	switch (ps->_status)
	{
	case END_NORMAL:
		printf("结束游戏\n");
		break;
	case KILL_BY_SELF:
		printf("表弟你撞到自己了\n");
		break;
	case KILL_BY_WALL:
		printf("表弟你撞到墙了\n");
		break;
	}

	//释放链表
	pSnakeNode cur = ps->_pSnake;
	while (cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}

}