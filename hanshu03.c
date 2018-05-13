#include<stdio.h>  //*自定义sqrt开根号一个数36


int sqrt(int question);

int main()
{
	int question=36, answer;

	answer = sqrt(question);
	if (question < 0)
		printf("errer:sqrt returns %d\n",answer);
	else
		printf("the sqrtare root of %d is %d\n", question, answer);
}

int sqrt(int question)
{
	int temp = question / 2;
	while (1)
	{
		if (temp*temp == question)
			return temp;
		else
			temp -= 1;
	}
}