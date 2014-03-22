#include <iostream>
#include <math.h>
using namespace std;
struct point
{
	double x, y;
};
int main()
{
	point  A, B, C, D;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> D.x >> D.y;
	double S;
	S=((A.x*B.y-B.x*A.y)+(B.x*C.y-C.x*B.y)+(C.x*D.y-D.x*C.y)+(D.x*A.y-A.x*D.y))/2;
	printf("%.0lf\n", fabs(S));
	return 0;
}

