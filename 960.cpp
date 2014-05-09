#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

inline double sqr(double num)
{
	return num*num;
}

int main()
{
	double R, r, h, l, S;
	cin >> R >> r >> h;
	l=sqrt(h*h+sqr(R-r));
	S=M_PI*r*r+M_PI*R*R+M_PI*l*(R+r);
	printf("%.2lf\n", S);
	return 0;
}

