
#if(0)
#include<stdio.h>

int shuzu(int v);

int main()
{
	int a[10] = { 1, 2, 3, 0, -1, -2, -9, -3, -7, -4 };
	int i;
	for (i = 0; i <= 10; i++)
	{
		shuzu(a[i]);
	}
	printf("\n");
}

int shuzu(int v)
{
	if (v > 0)
	{
		printf("%d  ", v);
	}
	else
	{
		printf("%d  ", 0);
	}
}

#endif