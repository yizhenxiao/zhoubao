

#include <stdio.h>//���Fibonacci����

void main()
{
	int i, a[20] = { 1,1 };
	for (i = 2; i < 20; i++)
	{
		a[i] = a[i - 2] + a[i - 1];	
		
	}
	for (i = 0; i < 20; i++)
	{
		if (0 == i % 5)
		{
			printf("\n");
		}


		printf("%12d", a[i]); 
	}
	
}