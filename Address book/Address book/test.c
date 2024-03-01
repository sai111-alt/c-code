#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//function��
//1.���Դ�����ɸ����ѣ����к�����Ϣ�������֡��绰���Ա�סַ������
//2.�������Ӻ�����Ϣ
//3.����ɾ��ָ�����ֵĺ�����Ϣ
//4.���Բ��Һ�����Ϣ
//5.�����޸ĺ�����Ϣ
//6.������ʾ������Ϣ
//7.�������������Ϣ

void menu()
{
	printf("*********************************************\n");
	printf("******      1.add            2.del     ******\n");
	printf("******      3.search         4.modify  ******\n");
	printf("******      5.show           6.save    ******\n");
	printf("******      0.exti                     ******\n");
	printf("*********************************************\n");

}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			DestroyContact(&con);
			SaveContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	}while(input);

	return 0;
}