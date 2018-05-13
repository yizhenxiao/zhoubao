#if(0)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long recursion(int n);//*ตÝน้

int main()
{
	int n;
	long result;

	printf("input ainteger number:\n");
	scanf("%d", &n);

	result = recursion(n);
	printf("%d!=%ld\n", n, result);
}

long recursion(int n)
{
	long temp_result;
	if (n < 0)
	{
		printf("n<0,input error!\n");
	}
	else if(n==0||n==1)
	{
		temp_result = 1;
	}
	else
	{
		temp_result = n * recursion(n - 1);
	}
	return temp_result;

}

#endif