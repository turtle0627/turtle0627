#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<errno.h>


//�����ļ�
//�����ļ�

int main()
{
	//���ļ�text.txt 
	//..��ʾ��һ��·��
	//.��ʾ��ǰ·��
	//���·��
	//fopen("../../text.txt", "r");
	//fopen("text.txt", "r");

	//����·��
	//fopen("D:\\bc\\text_5_3���ļ�������\\text_5_3���ļ�������", "r");
	
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	//�򿪳ɹ�
	//���ļ�
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}