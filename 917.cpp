#include <iostream>
using namespace std;

int main()
{
	short h;
	cin >> h;
	double cur, min=101;
	while(h--) {
		cin >> cur;
		if(cur<min)
			min=cur;
	}
	printf("%.2lf\n", 2*min);
	return 0;
} 