#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ��ṹ�����
//	struct Stu s2;
//
//	return 0;
//}

//struct 
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

/////////////////////////////
//�ṹ���������
// 
//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	sizeof(struct Node);//̫��
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

////�ṹ�������ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//	struct T st;
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',100,3.14,"hello bit",{55.6,30} };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//�ṹ���ڴ����
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}
// 12 8

//�޸�Ĭ�϶�����
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ��Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>//����ƫ����
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}
//������ 0 4 8








