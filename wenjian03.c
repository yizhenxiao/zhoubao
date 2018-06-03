#include<stdio.h>


int main()
{
	int i;
	for (i= 0; i < 5; i++) {
		printf("%d\n", f(i));
	}
	return 0;

}

int f(int x)
{
	if (x == 0) {
		return 0;
	}
	else
	{
		return 2 * f(x - 1) + x * x;
	}
}