#include <iostream>
#include <math.h>
using namespace std;

inline double sqr(double num)
{
	return num*num;
}

int main()
{
	double V, h, S, a, l;
	cin >> V >> h;
	S=3*V/h;
	a=sqrt(S);
	l=sqrt(h*h+a*a/2);
	h=(a+l+l)/2;
	S=4*sqrt(h*(h-a)*(h-l)*(h-l));
	printf("%.1lf\n", S);
	system("PAUSE");
	return 0;
} 