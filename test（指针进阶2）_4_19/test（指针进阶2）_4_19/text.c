#define _Ci = 0;iRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = tmp;
//				}
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int (*cmp)(const void* e1, const void* e2);

//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������Ԫ��
//	return *(int*)e1 - *(int*)e2;
//}

//void test1()//����
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if
//		return 1;
//	else
//		return -1;*/
//	return ((int) * (float*)e1 - *(float*)e2);
//}

//void test2()//������
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz = sizeof(f) / sizeof(f[0]);	
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}

//int cmp_struct_by_age(const void *e1,const void *e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

int cmp_struct_by_name(const void* e1, const void* e2)
{
	//�Ƚ����֣��ַ�����������><=�� Ҫ��strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name); 
}

//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_by_age);
//}

//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_by_name);
//}

////////////////////////////////////////////////////////////////////////
//ʵ��ð���������ĳ���Ա�Ƿ�֪��δ���������������
//���Ҳ��֪��Ҫ�Ƚϵ�����Ԫ�ص�����

void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, int sz, int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base +(j+1)*width)> 0)//�Ƚ�
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

//void test5() 
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


void test6()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]),cmp_struct_by_age);
	bubble_sort(s, sz, sizeof(s[0]),cmp_struct_by_name);
}

int main()
{
	/*test1();
	printf("\n");
	test2();
	printf("\n");
	test3();*/
	//bubble_sort(f, sz);//err
	//bubble_sort(arr, sz);
	//test4();
	//test5();
	test6();
	return 0;
}

//void����
//int main()
//{
//	int a = 0;
//	//char ch = 'w';
//	//int* pa = &a;
//	//char* pc = &a;//�о���
//	void* p = &a;//�޾���
//	//p = &ch;
//	*p = 0;//�Ƿ�Ѱַ
//	//void*���͵�����ָ����Խ����������͵ĵ�ַ
//	//void*ָ�벻�ܽ��н�Ӧ�ò���
//}