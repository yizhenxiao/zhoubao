

#include <math.h>
double f(double x)//�������ǹ�����
{
	return sin(x);
}
double f2(double x)
{
	return sin(cos(x));
}

typedef double(*func_type)(double);//�õ���ָ�뺯�����

double df(func_type f, double x) {
	double dx = 0.0001;
	return (f(x + dx) - f(x)) / dx;
}
int main()
{
	double x = 1;
	double dd = df(f, x);
	printf("%lf %lf\n", dd, cos(x));
	double dd2 = df(f2, x);
	printf("%lf %lf\n", dd2, cos(x));
	return 0;

}



