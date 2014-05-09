#include <iostream>
using namespace std;
bool validate(double& x, double& y)
{
	bool x_condition, y_condition;
	x_condition=(x>=(double)-3)&&(x<=(double)2);
	y_condition=(y>=(double)-4)&&(y<=(double)6);
	return x_condition&&y_condition;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	double x, y;
	scanf("%lf %lf", &x, &y);
	validate(x, y) ? printf("YES\n"): printf("NO\n");
	return 0;
}

