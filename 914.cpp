#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	short N;
	cin >> N;
	double cur, max=-101;
	while(N--) {
		cin >> cur;
		if(cur>max)
			max=cur;
	}
	printf("%.2lf\n", fabs(max));
	return 0;
} 