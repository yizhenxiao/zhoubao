#include<stdio.h>//�ı���������д��

int main()
{
	FILE *fp;
	char ch, filename[20];

	printf("��������Ҫд���ļ�����");
	scanf("%s\n", &filename);
	if (!(fp = fopen(filename, "wt+")))
	{
		printf("�ļ����ܴ�\n");
		exit(0);
	}
	else {
		printf("��������Ҫд�����ݣ�");
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