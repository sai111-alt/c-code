#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//声明函数
void LoadContact(struct Contact* ps);
void InitContact(struct Contact* ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;//设置通讯录最初只有0个人

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
//把文件中已经存放的通讯录中的信息加载到通讯录中
void LoadContact(struct Contact* ps)
{
	struct PenInof tmp = { 0 };
	FILE* pfRead = fopen("contact.txt","rb");
	if (pfRead == NULL)
	{
		perror("LoadContact:");
		return;
	}
	//读取文件，放到通讯录中
	while (fread(&tmp, sizeof(struct PenInof), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

//用于检查通讯录空间内容是否足够，不够增容
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PenInof* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PenInof));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}


void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);

	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("以上信息录入成功\n");

	//if (ps->size == MAX)
	//{
	//	printf("通讯录已满，无法增加\n");
	//}
	//else
	//{
	//	printf("请输入名字:>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄:>");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("请输入性别:>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话:>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址:>");
	//	scanf("%s", ps->data[ps->size].addr);

	//	ps->size++;
	//	printf("以上信息录入成功\n");
	//}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\ts%-20s\n", 
			"名字", "年龄", "性别", "电话", "地址");
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

//找到了返回名字所在元素下标
//没找到返回-1
//加static使得FindByName只能在contact.c文件下使用，而不暴露给其他文件
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
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要删除的对象不存在\n");
	}
	else//删除数据
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找对象的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要搜索的对象不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\ts%-20s\n",
			"名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改对象的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改的对象不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");

	}

}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

//用于保存通讯录的人员信息
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.txt", "w");
	if (pfWrite == NULL)
	{
		perror("SaveContact:");
		return;
	}
	//写通讯录信息到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PenInof), 1, pfWrite);
	}


	fclose(pfWrite);
	pfWrite = NULL;
}



