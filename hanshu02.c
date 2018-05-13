#include <stdio.h>  //*power的用法

double power(double a, double b);

int main()
{
	double power(double, double);
	double x = 2.0, y = 3.0,z;
	

	z = power(x, y);
	printf("%f的%f次方是%f", x, y, z);

	return 0;
}

double power(double x, double y)
{
	double z = 1;
	while (y)
	{
		z *= x;
		y --;
	}
	return z;
}