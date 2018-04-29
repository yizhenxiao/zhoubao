#include <stdio.h>//输出数列A和数列B 的数

void main()
{
	int i, a[5] = {0,1,2},b[5];
	printf("\n array a is:");
	for (i = 0; i < 5; i++)
		printf("%6d",a[i]);
	printf("\n array b is:");
	for(i=0;i<5;i++)
		printf("%6d",b[i]);
}
