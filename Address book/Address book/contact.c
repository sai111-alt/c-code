#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��������
void LoadContact(struct Contact* ps);
void InitContact(struct Contact* ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;//����ͨѶ¼���ֻ��0����

	ps->data = (struct PenInof*)malloc(DEFAULT_SZ * sizeof(struct PenInof));
	if (ps->data == NULL)
	{
		return;
	}
	ps -> size = 0;
	ps->capacity = DEFAULT_SZ;
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps);
//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
void LoadContact(struct Contact* ps)
{
	struct PenInof tmp = { 0 };
	FILE* pfRead = fopen("contact.txt","rb");
	if (pfRead == NULL)
	{
		perror("LoadContact:");
		return;
	}
	//��ȡ�ļ����ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(struct PenInof), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

//���ڼ��ͨѶ¼�ռ������Ƿ��㹻����������
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PenInof* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PenInof));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}


void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);

	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("������Ϣ¼��ɹ�\n");

	//if (ps->size == MAX)
	//{
	//	printf("ͨѶ¼�������޷�����\n");
	//}
	//else
	//{
	//	printf("����������:>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("����������:>");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("�������Ա�:>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("������绰:>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("�������ַ:>");
	//	scanf("%s", ps->data[ps->size].addr);

	//	ps->size++;
	//	printf("������Ϣ¼��ɹ�\n");
	//}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\ts%-20s\n", 
			"����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex,
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}

//�ҵ��˷�����������Ԫ���±�
//û�ҵ�����-1
//��staticʹ��FindByNameֻ����contact.c�ļ���ʹ�ã�������¶�������ļ�
static int FindByName(const struct Contact*ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{ 
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ���Ķ��󲻴���\n");
	}
	else//ɾ������
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���Ҷ��������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�����Ķ��󲻴���\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\ts%-20s\n",
			"����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);

	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸Ķ��������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵĶ��󲻴���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");

	}

}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

//���ڱ���ͨѶ¼����Ա��Ϣ
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.txt", "w");
	if (pfWrite == NULL)
	{
		perror("SaveContact:");
		return;
	}
	//дͨѶ¼��Ϣ���ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PenInof), 1, pfWrite);
	}


	fclose(pfWrite);
	pfWrite = NULL;
}



