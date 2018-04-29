#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>//输出自定义数列最大的一个数

void main()
{
	int i,max,a[10];
	printf("input 10 numbers:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 1; i < 10; i++)
		if (a[i] > max)
			max = a[i];
	
		printf("maxnum=%d\n",max);
}
