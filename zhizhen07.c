
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int array(int *x, int n)
{
	int temp, i, max = x[0];
	for (i = 1; i < n; i++)
	{
		if (max < x[i])
		{
			temp = x[i];
			x[i] = max;
			max = temp;
		}
	}
	return 1;

}

int main()
{
	int i, a[10] = {9,8,7,6,5,4,3,2,1,0};
	printf("输入十个数;\n");
	//scanf("%d", &a[10]);
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("\n");

	array(a,10);
	printf("%d\n", a[9]);
	return 0;
}

int iseqarr(int *a, int n)
{
	int i;
	for (i = 0; i < n - 1; ++i)
	{
		if (a[i] == a[i + 1])
		{
			return 1;
		}	
	}
	return 0;
}

int array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i]<a[i + 1] )
		{
			return 1;
		}
		if (a[i] > a[i + 1])
		{
			return 2;
		}
	}
	return 0;
}