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

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "����",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//}

//�����ļ�����abcdef
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��λ�ļ�ָ��
//	//fseek(pf, 2, SEEK_CUR);//�ӿ�ͷƫ��2λ
//
//	fseek(pf, -2, SEEK_END);//�ӽ�βƫ��2λ
//	
//	int pos = ftell(pf);//����ֵ��ƫ����
//	//��������ʹ��fgetc��pf��ƫ��������+1
//	printf("%d\n", pos);//���4
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//���c
//
//	rewind(pf);//������ʼλ��
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()//EOF��-1
//{
//	//�����һ�����ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	pritnf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	//���ļ�
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//�����һ�����ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	int ch = 0;
	while ((ch = fgets(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;

	return 0;
}


