#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���뻷��    ���л���

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	return 0;
//}


//Ԥ�������
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);  �����������ѭANSI C ��ֵΪ1������Ϊδ����
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}//��Ŀ��λ�õ��ļ�

//Ԥ����ָ��
//#define  //�����ʶ�� �����
//#include
//
//
////���ýṹ��Ĭ�϶�����
//#pragma pack(4)
//#pragma
//
//#if
//#endif
//#ifdef
//
//
//#define MAX 100
//#define STR "hehe"
//#define reg	register
//int main()
//{
//	retg int a;
//	register int a;
//}

//#define do_forever for(;;)
//int main()
//{
//	do_forever;//����ʱ��ѭ��
//	return 0; 
//}

//#define MAX 100;//�Ƿ�ӷֺ�
////��ò��� ��Ȼ�����ֺ� һ�������
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//�����
//#define SQUARE(X) X*X
//#define SQUARE(X) (X)*(X)
//д���ʱ�� ��������Ǳ��ʽ��Ҫע�����ȼ�

//int main()
//{
//	//int ret = SQUARE(5);
//	//25
//
//	//int ret = SQUARE(5 + 1);
//	//11
//	return 0;
//}

//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//55
//	return 0;
//}


//#��##
//void print(int a)
//{
//	printf("the value of a is %d\n", a");
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	//��ʱ��ӡ����b���� ����������� �����Ҫ��
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)//#X X�����������Ӧ���ַ���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//}

//##���԰�λ�����˵ķ��źϳ�һ������

//��ĸ����ò���
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	//int max = MAX(a, b);
//	//printf("%d\n", max);
//	
//	int max = MAX(a++, b++);
//	int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//��ͺ����ĶԱ�
int MAX(int x, int y)
{
	return (X > Y ? X : Y);
}
//�������úͷ��ؿ�������Ҫ��׼����

#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//Ԥ����׶�������滻

int main()
{
	int a = 10;
	int b = 20;
	float c = 3.0f;
	float d = 4.0f;

	//int max = MAX(a, b);
	//
	//max = MAX(a, b);

	int max = MAX(c, d);//���� int �� float

	max = MAX(c, d);
	
	return 0;
}