#if(0)
#include<stdio.h>
#include<string.h>

int main()
{
	int len;
	char str[20]="what are you doing";
	char sum[30] = "nice";
	char *sum1 = "nice";
	char sum2[] = "nice";
	//strcpy(str, "123456");
	sum[4] = 32;
	sum[5] = 0;
	len = strlen(str);
	//strcat(sum  , str);
	printf("%s的长度是%d,%s\n", str, len, sum);
	return 0;
}

#endif

#if(0)
#include<stdio.h>
#include<string.h>
#include<time.h>

void *my_memcpy(void *dest,const void *scr, size_t size);

int main()
{
	//clock_t start_t, end_t;

	char scr[20] = "yigedapengyou";
	char dest[20]="aaaabbbb";


	printf("copy之前是：%s\n", dest);
	my_memcpy( dest,  scr, strlen(scr)+1);
	printf("copy之后的是：%s\n", dest);
	return 0;
}

void *my_memcpy(void *dest, const void *scr, size_t size)
{
	if ((dest == NULL) || (scr == NULL))
	{
		return NULL;
	}
	 char *dest1 = ( char*)dest;
	 char *scr1 = ( char*)scr;

	while (size --)
	{
		*dest1 = *scr1;
		dest1++;
		scr1++;
	}
	return dest;
}
#endif



#if(0)
#include<assert.h>
#include<stdio.h>

typedef unsigned char byte;

int testbit(byte a, int n)
{
	return !!(a&(1<<n));

	//return (a >> n) & 1;
}
int countbit(byte a) {
	int i, y = 0;
	for (i = 0; i < 8; ++i)
	{
		y += testbit(a, i);
	}
	return y;
}

int main()
{
	int n = 0;
	assert(countbit(255) == 8);
	printf("%d\n", n);
	return 0;
}



       //0 01 10 11 100 101 110 111 1000     255=11111111

#endif           



#if(0)
#include <stdio.h>

const int MAX = 3;

int main()
{
	int  var[] = { 10, 100, 200 };
	int  i, *ptr;

	/* 指针中的数组地址 */
	ptr = var;
	for (i = 0; i < MAX; i++)
	{

		printf("存储地址：var[%d] = %x\n", i, ptr);
		printf("存储值：var[%d] = %d\n", i, *ptr);

		/* 移动到下一个位置 */
		ptr++;
	}
	return 0;
}
#endif



#if(0)
#include<stdio.h>

int main()
{
	int i, a[] = { 10,20,30 };
	for (i = 0; i < 3; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}
#endif


