#include <stdio.h>  //*power���÷�

double power(double a, double b);

int main()
{
	double power(double, double);
	double x = 2.0, y = 3.0,z;
	

	z = power(x, y);
	printf("%f��%f�η���%f", x, y, z);

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