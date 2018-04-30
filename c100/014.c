#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>  //对一个数质解因数

int main()
{
	int i, n;
	printf("请输入一个人整数: ");
	scanf("%d", &n);
	printf("%d= ", n);
	for (i = 2; i <= n; i++)
	{
		while (0 == n % i)
		{
			printf("%d", i);
			n /= i;

			if (n != 1)
				printf("*");
		}
	}
	return 0;
}

//

int main()
{
	int i, n = 12;
	printf("%d= ", n = 12);
	for (i = 2; i <= n; i++)
	{
		while (0 == n % i)
		{
			printf("%d", i);
			n /= i;

			if (n != 1)
				printf("*");
		}
	}
	return 0;
}

//