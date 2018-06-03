#include<stdio.h>


#if 0
typedef char*P;

int main()
{
	P p1;
	p1 = "i love ";
	printf("%s\n", p1);
}

#endif

typedef int(*POINTER)();

int fun();
int main()
{
	POINTER p;
	p = fun;
	p();
}

int fun()
{
	printf("ilove");
}
