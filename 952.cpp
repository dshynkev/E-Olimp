#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, h, b, p;
	cin >> a >>h;
	b=sqrt(h*h+ a*a/2);
	p=(a+b+b)/2;
	p=a*a+4*sqrt(p*(p-a)*(p-b)*(p-b));
	printf("%.1lf\n", p);
	return 0;
} 