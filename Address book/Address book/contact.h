#pragma once

#include<stdio.h>
#include<string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20

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
	struct PenInof data[MAX];//�����Ա��Ϣ
	int size;//���ͨѶ¼��ǰ���е�����
};

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
