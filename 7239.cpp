#include <iostream>
typedef unsigned long long ull;
using namespace std;
ull gcd(ull t1, ull t2)
{
	if(!t2)
		return t1;
	return gcd(t2, t1%t2);
}

unsigned long long lcm(ull& t1, ull& t2)
{
	return t1*t2/gcd(t1, t2);
}
int main()
{
	unsigned long long t1, t2;
	cin >> t1 >> t2;
	cout << lcm(t1, t2)<<endl;
	return 0;
}

