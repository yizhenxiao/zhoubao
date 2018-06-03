#include <stdio.h>
#include <math.h>       //这个程序是把101到200之间的素数打印出来

int main()
{
	int m, k, i, n = 0;
	for (m = 101; m <= 200; m = m + 2)
	{
		k = sqrt(m);
		for(i=2;i<=k;i++)
		{
			if (m%i == 0)  break;
		}
		if(i>=k+1)
		{
			printf("%d", m);   n = n + 1;
		}
		if (n % 10 == 0)
		{
			printf("\n");
		}
		printf("\n");
	}
}