#include<stdio.h>//文本打开
#include<stdlib.h>

#define F_path "d:\\code.txt"

void main()
{
	FILE *fp=NULL;
	if (!(fp = fopen(F_path, "w")))//注意要双“\\”
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


	