#define _CRT_SECURE_NO_WARNINGS


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE = 2,
//	FEMALE = 4,
//	SECURE = 8
//};
//
////enum Color
////{
////	RED,  //0
////	GREEN,//1
////	BLUE  //2
////};
//
//#define RED 0
//#define GREEN 0
//#define BLUE 2
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	int color = RED;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	return 0;
//}


//����-������-������
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//int check_sys1()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys2()
{
	union
	{
		char c;
		int i;
	}u;//�����ṹ��
	u.i = 1;
	//����1 С��
	//����2 ���
	return u.c;
}

int main()
{
	int a = 0x11223344;
	//�͵�ַ -------------------------> �ߵ�ַ
	// 11 22 33 44 ���
	// 44 33 22 11 С��
	//����һ�����ݣ������ڴ��ֽڴ��˳��
	//��С���ֽ���

	//int ret = check_sys1();

	//if (1 == *(char*)&a)
	//{
	//	printf("С��\n");
	//}
	//else
	//{
	//	printf("���\n");
	//}

	return 0;
}







