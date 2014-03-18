#include <iostream>
using namespace std;

int main()
{
	short i, h, quan=0;
	double cur, sum=0;
	cin >> h;
	for(i=1; i<h+1; ++i) {
		cin >> cur;
		if(!(i%3)&&cur>0) {
			sum+=cur;
			++quan;
		}
	}
	printf("%hd %.2lf\n", quan, sum);
	return 0;
} 