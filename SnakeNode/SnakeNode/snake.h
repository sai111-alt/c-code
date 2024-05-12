#pragma once

//库文件的引用
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define POS_X 24//蛇尾的初始x坐标
#define POS_Y 5//蛇尾的初始y坐标
#define WALL L'□'//墙体符号
#define BODY L'●'//蛇体符号
#define FOOD L'★'//食物符号

//类型的声明
enum DIRECTION//蛇的方向
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};
enum GAME_STATUS//游戏的状态
{
	OK,//正常的状态
	KILL_BY_WALL,//蛇撞墙
	KILL_BY_SELF,//蛇撞到自己
	END_NORMAL//正常退出
};

typedef struct SnakeNode//蛇身节点类型
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;//* pSnakeNode即typedef struct SnakeNode* pSnakeNode

typedef struct Snake//游戏的信息
{
	pSnakeNode _pSnake;//蛇头指针
	pSnakeNode _pFood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//游戏的状态
	int _food_weight;//一个食物的分数
	int _score;//总成绩
	int _sleep_time;//蛇每移动一次的休息时间，因为链表的转换非常快，所以必须要休息，休息越短，蛇速越快

}Snake,* pSnake;


//函数的声明
void SetPos(short x, short y);//光标位置设置
void GameStart(pSnake ps);//游戏初始化
void WelcomeToGame();//欢迎界面和功能介绍打印
void CreateMap();//地图绘制
void InitSnake(pSnake ps);//初始化蛇
void CreatFood(pSnake ps);//初始化食物
void GameRun(pSnake ps);//游戏运行的逻辑
void SnakeMove(pSnake ps);//蛇的移动
void EatFood(pSnakeNode pn, pSnake ps);//蛇吃了食物
void NotFood(pSnakeNode pn, pSnake ps);//蛇没吃食物
void KillByWall(pSnake ps);//检测蛇是否撞到了墙
void KillBySelf(pSnake ps);//检测蛇是否撞到了自己
void GameEnd(pSnake ps);//游戏结束