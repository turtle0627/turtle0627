#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<errno.h>


//程序文件
//数据文件

int main()
{
	//打开文件text.txt 
	//..表示上一个路径
	//.表示当前路径
	//相对路径
	//fopen("../../text.txt", "r");
	//fopen("text.txt", "r");

	//绝对路径
	//fopen("D:\\bc\\text_5_3（文件操作）\\text_5_3（文件操作）", "r");
	
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	//打开成功
	//读文件
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}