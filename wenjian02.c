#include<stdio.h>//�ı���
#include<stdlib.h>

#define F_path "d:\\code.txt"

void main()
{
	FILE *fp=NULL;
	if (!(fp = fopen(F_path, "w")))//ע��Ҫ˫��\\��
	{
		printf("can not open D:\\code.txt file!\n");
		system("pause");
	}
	else
	{
		printf("open success!\n");
	}
	return 0;
}


	