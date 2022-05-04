#define _CRT_SECURE_NO_WARNINGS 
#include <string.h>
#include<errno.h>
#include<stdio.h>


//程序文件
//数据文件

//int main()
//{
//	//打开文件text.txt 
//	//..表示上一个路径
//	//.表示当前路径
//	//相对路径
//	//fopen("../../text.txt", "r");
//	//fopen("text.txt", "r");
//
//	//绝对路径
//	//fopen("D:\\bc\\text_5_3（文件操作）\\text_5_3（文件操作）", "r");
//	
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
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
//	//读文件
//	printf("%c", fgetc(pfRead);
//	printf("%c", fgetc(pfRead);
//	printf("%c", fgetc(pfRead);
// 
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//从键盘输入
//输出到屏幕
//键盘&屏幕 外部设备
// 写   读
//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 - stdout
//是一个程序默认打开的两个流设备
//stdin  FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);//从键盘读
//	fputc(ch, stdout);
//
//	return 0;
//}//输入什么会打印什么（从标准输入流读取）


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
//	fgets(buf, 1024, stdin);//从标准输入读取
//	fputs(buf, stdout);//输出到标准输出
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
//	struct S s = { 100,3.14f,"bit" };//f的作用是float型，原本默认double
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
//	//把格式化的数据转换成字符串储存到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//从buf中读取格式化的数据到tmp中
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
	struct S s = { "张三",20,55.6 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式写文件
	fwrite(&s, sizeof(struct S), 1, pf);

	fclose(pf);
	pf = NULL;
}






