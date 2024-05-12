#pragma once

//���ļ�������
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define POS_X 24//��β�ĳ�ʼx����
#define POS_Y 5//��β�ĳ�ʼy����
#define WALL L'��'//ǽ�����
#define BODY L'��'//�������
#define FOOD L'��'//ʳ�����

//���͵�����
enum DIRECTION//�ߵķ���
{
	UP = 1,
	DOWN,
	LEFT,
	RIGHT
};
enum GAME_STATUS//��Ϸ��״̬
{
	OK,//������״̬
	KILL_BY_WALL,//��ײǽ
	KILL_BY_SELF,//��ײ���Լ�
	END_NORMAL//�����˳�
};

typedef struct SnakeNode//����ڵ�����
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;//* pSnakeNode��typedef struct SnakeNode* pSnakeNode

typedef struct Snake//��Ϸ����Ϣ
{
	pSnakeNode _pSnake;//��ͷָ��
	pSnakeNode _pFood;//ָ��ʳ��ڵ��ָ��
	enum DIRECTION _dir;//�ߵķ���
	enum GAME_STATUS _status;//��Ϸ��״̬
	int _food_weight;//һ��ʳ��ķ���
	int _score;//�ܳɼ�
	int _sleep_time;//��ÿ�ƶ�һ�ε���Ϣʱ�䣬��Ϊ�����ת���ǳ��죬���Ա���Ҫ��Ϣ����ϢԽ�̣�����Խ��

}Snake,* pSnake;


//����������
void SetPos(short x, short y);//���λ������
void GameStart(pSnake ps);//��Ϸ��ʼ��
void WelcomeToGame();//��ӭ����͹��ܽ��ܴ�ӡ
void CreateMap();//��ͼ����
void InitSnake(pSnake ps);//��ʼ����
void CreatFood(pSnake ps);//��ʼ��ʳ��
void GameRun(pSnake ps);//��Ϸ���е��߼�
void SnakeMove(pSnake ps);//�ߵ��ƶ�
void EatFood(pSnakeNode pn, pSnake ps);//�߳���ʳ��
void NotFood(pSnakeNode pn, pSnake ps);//��û��ʳ��
void KillByWall(pSnake ps);//������Ƿ�ײ����ǽ
void KillBySelf(pSnake ps);//������Ƿ�ײ�����Լ�
void GameEnd(pSnake ps);//��Ϸ����