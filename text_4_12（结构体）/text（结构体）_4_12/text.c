#define _CRT_SECURE_NO_WARNINGS _1
#include <stdio.h>
//����һ��ѧ��
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//
//int main()
//{
//	Stu s1 = { "����",20,"13764390368","��" };
//	Stu s2;
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	struct T t = { "hehe",{100,'w',"hello world",3.14},NULL};
//	printf("%s\n",t.)
//	return 0;
//}

void Print1(Stu s)
{
	printf("name: %s\n", s.name);
	printf("age : %d\n", s.age );
	printf("tele: %s\n", s.tele);
	printf("sex : %s\n", s.sex );
}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age : %d\n", ps->age );
	printf("tele: %s\n", ps->tele);
	printf("sex : %s\n", ps->sex );
}

int main()
{
	Stu s = { "����",40,"2132348293","��" };
	Print1(s);
	Print2(&s);
	return 0;
}