#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//text.c(���Թ���

//contact.c(ʵ�ֺ�������

//contact.h(��������

//ͨѶ¼����
//1.���1000���˵ĺ�����Ϣ
//���� --> ����+�绰+�Ա�+סַ+����
//2.�ܹ����Ӻ�����Ϣ
//3.�ܹ�ɾ��������Ϣ
//4.�ܹ����Һ�����Ϣ
//5.�ܹ��޸ĺ�����Ϣ
//6.�ܹ���ӡ������Ϣ
//7.����

void menu()
{
	printf("***************************************\n");
	printf("****** 1. add          2. del    ******\n");
	printf("****** 3. search       4. modify ******\n");
	printf("****** 5. show         6. sort   ******\n");
	printf("****** 0. exit                   ******\n");
	printf("***************************************\n");
}






int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�غ�size
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��");
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
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}