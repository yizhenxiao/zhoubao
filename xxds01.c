#if(0)
#include<stdio.h>

int main()
{
	FILE *fp;
	int count = 0;
	fp = fopen("D:/ѧϰ/code", "r");
	if (fp == null)
	{
		printf("erro")
	}
	if (fp == '\n')
	{
		count += 1;
	}
	if (fp != '\n')
	{
		count +=1;
	}
	printf("%d\n", count);
	return 0;
}
#endif



#if(0)
#include<stdio.h>
#include<string.h>

int main()
{
	char src[] = "bbbb";
	char dest[20]="111\0";
	printf("before memcpy: %s\n", dest);
	memcpy(dest, src, strlen(src));
	printf("aftermemcpy: %s\n",dest);
	strcat(dest, src);
	printf("src+dest=:%s \n",dest);
	return 0;
}





#include<stdio.h>
#include<string.h>

int main() {
	//����strcpyΪ�ַ����鸳ֵ
	char parr[40];
	strcpy(parr, "zifuchuanshuzu");
	printf("The parr[] is : %s\n\n", parr);
	//��ֵ�ַ�����һ����
	char charr[] = "_test_strcat_redundance";
	char tarr[13];
	charr[12] = '\0';//����charr��ǰ12���ַ�
	strcpy(tarr, charr);
	printf("The tarr[] is : %s\n\n", tarr);
	//�ַ�������
	strcat(parr, charr);
	printf("The parr and tarr[] is : %s\n", parr);
	return 0;
}
#endif