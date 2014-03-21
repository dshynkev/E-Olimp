#include <iostream>
#include <math.h>
using namespace std;

struct point
{
	double x, y;
};

int main()
{
	point a, b, c, d, o;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
	double l1, l2;
	l1=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
	l2=sqrt((d.x-b.x)*(d.x-b.x)+(d.y-b.y)*(d.y-b.y));
	o.x=(a.x+c.x)/2;
	o.y=(a.y+c.y)/2;
	printf("%.3lf %.3lf\n%.3lf %.3lf\n", o.x, o.y, l1, l2);
	return 0;
} 