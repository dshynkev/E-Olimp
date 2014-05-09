#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	short N, i;
	__int64 res=3;
	cin >> N;
	for(i=2; i<=N; ++i) {
		res*=2;
	}
	cout << res<<endl;
	return 0;
} 