#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	short a, b, c;
	double p;
	cin >> a >> b >> c;
	p=(double(a)+b+c)/2;
	double S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf %.2lf %.2lf\n", 2*S/a, 2*S/b, 2*S/c);
	system("PAUSE");
	return 0;
} 