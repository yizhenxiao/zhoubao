
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


#define countof(arr)  sizeof(arr)/sizeof(arr[0])

double minitem(double array[], int n);

int main()
{
	//double score[] = { 82,84,86,87,88,79,99,11,95,77 };
	int max, i;
	int n = 10;
	
	double* arr = (double*)malloc(n*sizeof(double));
	if (NULL == arr) {
		printf("malloc fail\n");
		return 0;
	}
	srand(time(0));
	for (i = 0; i < n; ++i) {
		arr[i] = rand();
		printf("%d\n", time(0));
	}
	max  = minitem(arr, n);

	
	if (max >= 0) 
	{
		printf("max score is %5.2lf\n", arr[max]);
	}
	else 
	{
		printf("error\n");
	}
	free(arr);
	return max;
}

double minitem(double array[], int n)
{
	int max = 0;    //先定义max
	if (n <= 0)     //判断条件是否成立
	{
		return -1;
	}
	
	int  i;
	
		for (i = 1; i < n; i++)    //计算结果
		{

			if (0==sqrt(array[i] ))
			{
				max = i;
			}
		}
	

	return max;
}
