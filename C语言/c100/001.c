#include <stdio.h>
int main()
{
	long int f1, f2;
	int i;
	f1 = 1;
	f2 = 1;
	for (i = 1; i <= 20; i++)
	{
		printf("%12lf%12lf", f1, f2);
		if(0==i%2)
		{
			printf("\n");
		}
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

}