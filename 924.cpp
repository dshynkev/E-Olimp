#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double S, r2;
	cin >> S >> r2;
	S= (3.141592535*r2*r2)-S;
	printf("%.2lf\n", sqrt(S/3.141592535));
	return 0;
} 