#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int score;
	char grade;
	printf("������һ���ɼ��� ");
	scanf("%d", &score);
	printf("%d\n", score);
	while (score)
	{
		if (score >= 90)
		{
			printf("%c", 'A');
		}
		break;

		if (68 <= score <= 89)
		{
			printf("%c", 'B');
		}
		break;

	if(score<68)
		break;
	}
		
	printf("\n");
	return 0;
}