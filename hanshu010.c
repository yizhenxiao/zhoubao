#include<stdio.h>


#define countof(arr)  sizeof(arr)/sizeof(arr[0])

double minitem(double array[], int n);

int main()
{
	double score[] = { 82,84,86,87,88,79,99,11,95,77 };
	int min = minitem(NULL, 0);
	printf("average score is %5.2lf\n", score[min]);
	return min;
}

double minitem(double array[], int n)
{
	int  i;

	int min = 0;
	for (i = 1; i < n; i++)
	{


		if (array[i] < array[min])
		{
			min = i;
		}
	}

	return min;
}
