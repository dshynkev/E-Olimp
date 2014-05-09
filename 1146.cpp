#include <iostream>
#include <math.h>
using namespace std;

short gcd(short a, short b)
{
	if(!b)
		return a;
	return gcd(b, a%b);
}

int main()
{
	__int64 G=0;
	short n, i, j;
	while(cin >> n&&n) {
		for(i=1; i < n;i++) {
			for(j=i+1;j<=n;j++)
			{
				G+=gcd(i,j);
			}
		}
		cout << G << endl;
		G=0;
	}
	return 0;
}

