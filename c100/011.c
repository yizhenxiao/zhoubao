#include <stdio.h>//古典问题（兔子生崽）

int main()

{
	int F1 = 1, F2 = 1, i;
	for (i = 1; i < 10; i++)
	{
		printf("%5d%5d", F1, F2);


		F1 = F1 + F2;
		F2 = F1 + F2;
	}
	return 0;

}





