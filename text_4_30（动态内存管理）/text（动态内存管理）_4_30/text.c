#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<windows.h>

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	return 0;
//}//error

//C�����ǿ��Դ����䳤���� -C99��������

//malloc  ����ʼ��
//free
//calloc  ��ʼ��Ϊ0
//realloc ���Ե�����̬�ڴ�Ĵ�С

//int main()
//{
//	//���ڴ�����10�����οռ�
//	//int* p = (int*)malloc(10 * sizeof(int));//�ɹ�
//	int* p = (int*)malloc(INT_MAX);
//	//malloc���ܿ��ٿռ�ʧ��
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else//����ʹ�ÿռ�
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//ʹ����� Ҫ�黹
//	free(p);//�ͷſռ�
//	p = NULL;//��ֹ������
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		pritnf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//����20�������ٵĲ������ˣ�ϣ����40��
//	//ʹ��realloc
//	int*ptr = realloc(p, 4000);
//	if (ptr == NULL)//׷��ʧ��
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//reallocʹ��ע������
//�пռ�׷�ӣ�ֱ��׷�Ӳ�����p
//û�пռ�׷�ӣ�ֱ�ӿ�������������Ŀռ䲢��ԭ���ڴ��е����ݿ������������ͷžɵ��ڴ棬�����µ�ַ
//׷��ʧ�ܣ����ؿ�ָ��
//���ʹ���µı���������realloc�����ķ���ֵ

//int main()
//{
//	int* p = (int*)malloc(40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//}
//Խ�����

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}//�ԷǶ�̬�����ڴ��free error

//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p2 = p;
//	}*/
//
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//�ڴ�й©
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
// }

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test1();
//	return 0;
//}//������� p����ʱ���� ���������Ժ����ʧ�� ���Ե�ַ�Ҳ����� �ڴ�й©
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test2(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test2();
//	return 0;
//}//ʹ�ö���ָ�봫��ַ

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test3(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test3();
//	return 0;
//}//���ӷ���ֵ p����ڲ�����Ϊ����������ʧ


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//����ջ�ռ��ַ���� �Ƿ�����

//int* test()
//{
//	int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}//����ջ�ռ��ַ���� �Ƿ�����
//
//int* test()
//{
//	static int a = 10;//��̬��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//�����ʹ��
//
//int* test()
//{
//	int* ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test;
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//�����ͷ�

/////////////////////////

//struct S
//{
//	int n;
//	int arr[10];
//};//��ͳд��

//struct S
//{
//	int n;
//	int arr[];//δ֪��С //�� arr[0]
//};//���������Ա
//
//int main()
//{
//	//struct S s;
//	struct S* ps =(struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//Ч��ͬ�� ���Ǹ��� ������������Ĵ�������
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5*sizeof(struct S));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}















