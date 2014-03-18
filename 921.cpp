#include <iostream>
using namespace std;

int main()
{
	short h,quan=0;
	double cur, sum=0;
	cin >> h;
	while(h--)  {
		cin >> cur;
		if(cur<0) {
			sum+=cur;
			++quan;
		}
	}
	printf("%hd %.2lf\n", quan, sum);
	return 0;
} 