
#if(0)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>//��ŵ���ƶ��ݹ��㷨

int main()
{
	void hanoi(int n, char one, char two, char three);//�Ժ���������
	int n;

	printf("input the number of diskes:");
	scanf("%d", &n);
	printf("thr step to moving %d diskes:\n", n);
	hanoi(n, 'A', 'B', 'C');

}

void hanoi(int n, char one, char two, char three)//�Ժ���������
{
	void move(char x, char y);//��move����������
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}

}

void move(char x, char y)//����move����
{
	printf("%c-->%c\n", x, y);
}

#endif