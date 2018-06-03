
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int *p1, *p2, *p,a, b;
	scanf("%d%d\n", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("%d%d\n", a, b);
	printf("max=%d,min=%d\n", *p1, *p2);
}