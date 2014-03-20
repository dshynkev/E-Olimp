#include <iostream>
using namespace std;
int main()
{
	short n, cur;
	long quan=0;
	double c;
	cin >> n;
	while(n--) {
		cin >> cur >> c;
		if(c<50.00)
			quan+=cur;
	}
	cout << quan<<endl;
	return 0;
} 