#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, h;
	cin >> a >> b >> h;
	double S, l;
	l=sqrt((a-b)*(a-b)/4+h*h);
	S=2*(a+b)*l;
	printf("%.2lf\n", S);
	return 0;
} 