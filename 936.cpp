#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	double a1, b1, c1, a2, b2, c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	double d = a1*b2-a2*b1;
    double d1 = c1*b2-c2*b1;
	double d2 = a1*c2-a2*c1;
	printf("%.3lf\n%.3lf\n", d1/d, d2/d);
	return 0;
} 