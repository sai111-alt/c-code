#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//function��
//1.���Դ��1000�����ѵ���Ϣ���������֡��绰���Ա�סַ������
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
	printf("******      5.show           6.sort    ******\n");
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
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	}while(input);

	return 0;
}