#include <stdio.h>

int main()

{
	int i, j;
	printf("\1\1\n");
	for (i = 1; i < 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c%c",38,38);
		printf("\n");
	}
	return 0;

}