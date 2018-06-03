#include<stdio.h>//文本的命名和写入

int main()
{
	FILE *fp;
	char ch, filename[20];

	printf("请输入你要写的文件名：");
	scanf("%s\n", &filename);
	if (!(fp = fopen(filename, "wt+")))
	{
		printf("文件不能打开\n");
		exit(0);
	}
	else {
		printf("请输入您要写的内容：");
		ch = getchar();
		ch = getchar();
		while (ch != EOF)
		{
			fputc(ch, fp);
			ch = getchar();
		}
		fclose(fp);
	}
}