#define _CRT_SECURE_NO_WARNINGS 
#include <string.h>
#include<errno.h>
#include<stdio.h>


//�����ļ�
//�����ļ�

//int main()
//{
//	//���ļ�text.txt 
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//���·��
//	//fopen("../../text.txt", "r");
//	//fopen("text.txt", "r");
//
//	//����·��
//	//fopen("D:\\bc\\text_5_3���ļ�������\\text_5_3���ļ�������", "r");
//	
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("text.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("text.txt", "w");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead);
//	printf("%c", fgetc(pfRead);
//	printf("%c", fgetc(pfRead);
// 
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//�Ӽ�������
//�������Ļ
//����&��Ļ �ⲿ�豸
// д   ��
//���� - ��׼�����豸 - stdin
//��Ļ - ��׼����豸 - stdout
//��һ������Ĭ�ϴ򿪵��������豸
//stdin  FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);//�Ӽ��̶�
//	fputc(ch, stdout);
//
//	return 0;
//}//����ʲô���ӡʲô���ӱ�׼��������ȡ��


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	fputs(buf, stdout);//�������׼���
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };//f��������float�ͣ�ԭ��Ĭ��double
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "% d % f % s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

///////////

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ������浽buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf,"%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct S s = { "����",20,55.6 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		return 0;
	}
	//�����Ƶ���ʽд�ļ�
	fwrite(&s, sizeof(struct S), 1, pf);

	fclose(pf);
	pf = NULL;
}






