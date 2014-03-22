#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double d, p, S, h, V;
	cin >> d >> p;
	V=(d+p+p)/2;
	S=d*d+4*sqrt(V*(V-d)*(V-p)*(V-p));
	h=sqrt(p*p - d*d/2);
	V=d*d*h/3;
	printf("%.3lf %.3lf\n", S, V);
	system("PAUSE");
	return 0;
} 