#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SAVE
};

struct PenInof
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼
struct Contact
{
	struct PenInof* data;//�����Ա��Ϣ
	int size;//���ͨѶ¼��ǰ���е�����
	int capacity;//���ͨѶ¼��ǰ��������С
	//struct PenInof data[MAX];//�����Ա��Ϣ
};

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);

