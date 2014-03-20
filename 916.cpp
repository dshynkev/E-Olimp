#include <iostream>
using namespace std;

inline void swp(short& a, short& b)
{
	a^=b;
	b^=a;
	a^=b;
}

int main()
{
	short a, b, c, d, quan=0, i, j;
	cin >> a >> b>> c>> d;
	bool matrix[101]={0};
	if(a>b)
		swp(a, b);
	if(c>d)
		swp(c, d);
	for(i=a; i<=b; ++i) {
		for(j=c; j<=d; ++j) {
			if(!matrix[i*j]) {
				++quan;
				matrix[i*j]=1;
			}
		}
	}
	cout << quan << endl;
	return 0;
} 