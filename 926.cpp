#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, d, f, p, ans;
	cin >> a >> b>> c>>d >>f;
	p=(a+b+f)/2;
	ans=sqrt(p*(p-a)*(p-b)*(p-f));
	p=(c+d+f)/2;
	ans+=sqrt(p*(p-c)*(p-d)*(p-f));
	printf("%.4lf\n", ans);
	return 0;
} 