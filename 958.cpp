#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
struct point
{
	double x, y;
};
inline double sqr(double num)
{
	return num*num;
}
int main()
{
	double b, a, c, S;
	cin >> b >> a;
	c=b*cos(M_PI*a/180.0);
	c=c*sqrt(2);
	a=(b+b+c)/2;
	S=c*c+4*sqrt(a*(a-b)*(a-b)*(a-c));
	printf("%.3lf\n", S);
	return 0;
}

