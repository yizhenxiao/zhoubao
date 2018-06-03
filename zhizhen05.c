#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[10];
	int i;
	int *p;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (p = a; p < (a + 10); p++)
	{
		printf("%d\n", *p);
	}
}