#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 1, i;
	for (i = 10; i > 0; i--)
	{
		printf("��%d������û�Ե�ˮ������%d=\n��",i,sum);
		sum = (sum + 1) * 2;
	}
	return 0;
}