#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double x1, x2, x3, y1, y2, y3, side1, side2, side3, p;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 
	side1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	side2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	side3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	p=side1+side2+side3;
	printf("%.4lf ", p);
	p/=2;
	p=sqrt(p*(p-side1)*(p-side2)*(p-side3));
	printf("%.4lf\n", p);
	return 0;
} 