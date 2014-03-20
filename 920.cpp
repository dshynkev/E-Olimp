#include <iostream>
using namespace std;

inline double min(double& a, double &b, double c)
{
	return (a < b  ?  (a < c ? a:c):(b<c ? b : c));
}

inline double& max(double& a, double& b)
{
	return (a>b ? a:b);
}

int main()
{
	double x, y, z;
	cin >> x >> y >> z;
	printf("%.2lf\n", ::min(::max(x, y), ::max(y, z), x+y+z));
	return 0;
} 