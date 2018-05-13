#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 1, i;
	for (i = 10; i > 0; i--)
	{
		printf("第%d天早上没吃的水果数是%d=\n：",i,sum);
		sum = (sum + 1) * 2;
	}
	return 0;
}