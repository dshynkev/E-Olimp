#include <iostream>
#include <string>
using namespace std;

int main()
{
	double x1, y1, x2, y2, a, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> a;
	x=(x1+a*x2)/(1+a);
	y=(y1+a*y2)/(1+a);
	printf("%.2lf %.2lf\n", x, y);
	return 0;
} 