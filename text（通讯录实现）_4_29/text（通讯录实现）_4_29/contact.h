#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define MAX_NAME 5
#define MAX_AGE 3
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include<string.h>

enum Option
{
	EXIT,   //0
	ADD,    //1
	DEL,    //2
	SEARCH, //3
	MODIFY, //4
	SHOW,   //5
	SORT    //6
};

struct PeoInfo
{
	char name[MAX_NAME];
	char age[MAX_AGE];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���
};

//��������
void InitContact(struct Contact* ps);

void AddContact(struct Contact* ps);

void DelContact(struct Contact* ps);

void SearchContact(const struct Contact* ps);

void ShowContact(const struct Contact* ps);

void ModifyContact(struct Contact* ps);

void SortContact(struct Contact* ps);