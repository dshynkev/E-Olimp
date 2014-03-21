#include <iostream>
#include <math.h>
using namespace std;
struct point3d
{
	short x, y, z;
};

inline double sqr(double num)
{
	return num*num;
}

int main()
{
	point3d A, B, C, S;
	cin >> A.x >> A.y >> A.z;
	cin >> B.x >> B.y >> B.z;
	cin >> C.x >> C.y >> C.z;
	cin >> S.x >> S.y >> S.z;
	double a, b, c, d, e, f;
	a=sqrt(sqr(B.x-A.x)+sqr(B.y-A.y)+sqr(B.z-A.z));
	b=sqrt(sqr(C.x-B.x)+sqr(C.y-B.y)+sqr(C.z-B.z));
	c=sqrt(sqr(A.x-C.x)+sqr(A.y-C.y)+sqr(A.z-C.z));
	d=sqrt(sqr(S.x-A.x)+sqr(S.y-A.y)+sqr(S.z-A.z));
	e=sqrt(sqr(S.x-B.x)+sqr(S.y-B.y)+sqr(S.z-B.z));
	f=sqrt(sqr(S.x-C.x)+sqr(S.y-C.y)+sqr(S.z-C.z));
	double p, dS=0;
	p=(a+b+c)/2;
	dS+=sqrt(p*(p-a)*(p-b)*(p-c));
	p=(a+d+e)/2;
	dS+=sqrt(p*(p-d)*(p-e)*(p-a));
	p=(b+e+f)/2;
	dS+=sqrt(p*(p-b)*(p-e)*(p-f));
	p=(c+d+f)/2;
	dS+=sqrt(p*(p-c)*(p-d)*(p-f));
	printf("%.1lf\n", dS);
	return 0;
} 