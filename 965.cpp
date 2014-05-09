#include <iostream>
#include <math.h>
using namespace std;

__int64 power(__int64 N, __int64 base)
{
	__int64 temp=N;
	for(__int64 i=1; i<base; ++i) {
		N*=temp;
		if(N>9973)
			N=N%9973;
	}
	return N;
}

int main()
{
	__int64 N;
	cin >> N;
	cout << power(N*N*(N*N+1)/2, N)<<endl;
	return 0;
}

