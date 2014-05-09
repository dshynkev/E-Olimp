#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long S, K, A, B;
	cin >> S >> K >> A >>B;
	if(S*A==B)
		cout << S*K << endl;
	else
	{
		long res=0, i;
		for(i=1; i<1001; ++i) {
			if(!(abs(S*A-B)%i)) {
				res=((B-S*A)/i)+S*K;
				if(res>=0&&A>i*K) {
					cout << res<<endl;
					break;
				}
			}
		}
		if(i==1001)
			cout << -1<<endl;
	}
	return 0;
} 