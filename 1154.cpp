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
	short M, N;
	while(cin >> N >> M) {
		if(gcd(N, M)!=1)
			cout << "NO"<<endl;
		else
			cout << "YES"<<endl;
	}
	return 0;
}

