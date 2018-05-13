
#if(0)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>//汉诺塔移动递归算法

int main()
{
	void hanoi(int n, char one, char two, char three);//对函数的声明
	int n;

	printf("input the number of diskes:");
	scanf("%d", &n);
	printf("thr step to moving %d diskes:\n", n);
	hanoi(n, 'A', 'B', 'C');

}

void hanoi(int n, char one, char two, char three)//对函数的声明
{
	void move(char x, char y);//对move函数的声明
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}

}

void move(char x, char y)//定义move函数
{
	printf("%c-->%c\n", x, y);
}

#endif