#include <stdio.h>//��101��200֮�������

int main()

{
	int i, j,count=0;
	for (i = 101; i < 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (0 == i % j)
				break;
		}
		if (j >= i)
		{
			count++;
			printf("%d  ", i);
			if (0 == count % 5)
				printf("\n");
		}

	}
	return 0;

}