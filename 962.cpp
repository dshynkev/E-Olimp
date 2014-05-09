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
inline double dist(point& A, point& B)
{
	return sqrt(sqr(A.x-B.x)+sqr(A.y-B.y));
}
int main()
{
	point A, B, C, D;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> D.x >> D.y;
	printf("%.2lf\n", max(max(dist(A, B), dist(B, C)), max(dist(C, D), dist(D, A))));
	return 0;
}

