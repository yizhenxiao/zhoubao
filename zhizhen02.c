
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int swap(int *p1, int *p2);

int main()
{
	int a, b;
	int *pointer_1, *pointer_2;
	scanf("%d %d\n", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if(a < b)
	{
		swap(*pointer_1, *pointer_2);
	}
	printf("\n%d %d\n", a, b);
}
int swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}