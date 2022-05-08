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

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
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
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//}

//假设文件内是abcdef
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	//fseek(pf, 2, SEEK_CUR);//从开头偏移2位
//
//	fseek(pf, -2, SEEK_END);//从结尾偏移2位
//	
//	int pos = ftell(pf);//返回值是偏移量
//	//假设这里使用fgetc（pf）偏移量会再+1
//	printf("%d\n", pos);//输出4
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//输出c
//
//	rewind(pf);//返回起始位置
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()//EOF是-1
//{
//	//假设打开一个空文件
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
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	pritnf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//假设打开一个空文件
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


