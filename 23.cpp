#include<iostream>
#include<math.h>
using namespace std;

__int64 _step(__int64 n, __int64 k)
{
	__int64 i=1, j=1;
	for(; j<=k; ++j) {
		i*=n;
	}
	return i;
}

__int64 _count(__int64 n , __int64 k)
{
	if(n==2)
		return k*(k-1);
	else
		return k*_step(k-1, n-1)-_count(n-1, k);
}

int main()
{
	__int64 n, k;
	cin >> n >> k;
	if(n==1) {
		cout << k << endl;
		return 0;
	}
	if(k==1||(n%2&&k==2)) {
		cout << -1 << endl;
		return 0;
	}
	if(k==2&&!(n%2)) {
		cout << 2 << endl;
		return 0;
	}
	cout << _count(n, k)<<endl;
    return 0;
}
