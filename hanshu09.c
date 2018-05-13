

#if(0)
#include<stdio.h>


#define countof(arr)  sizeof(arr)/sizeof(arr[0])

double average(double array[], int n);

int main()
{
	double score[] = { 82,84,86,87,88,79,99,11,95,77 }, min;
	min = average(score, countof(score));
	printf("average score is %5.2lf\n", min);
	return min;
}

double average(double array[], int n)
{
	int i, average;
	for (i = 0; i < n; i++)
	{
		average=
	}
	printf("%lf ", average);
	return average;
}

#endif