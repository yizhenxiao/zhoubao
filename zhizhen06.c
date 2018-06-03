#include<stdio.h>

int reverse(int x[], int n);//数组名做参数

int main()
{
	int i, a[10] = { 2,3,8,5,9,6,7,4,1,2 };
	printf("the original array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");

	reverse(a, 10);
	printf("the array has been inverted:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int reverse(int x[], int n)
{
	int temp, i, j, m;
	m= (n - 1) / 2;
	for (i = 0; i <= m; i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j = temp];
	}
}