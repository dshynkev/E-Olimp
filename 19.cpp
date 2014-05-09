#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	cin >> N;
	int k=0, len=N.length();
	for(int i=1; i<=(len%2 ? len/2+1 : len/2); ++i)
		if(N[i-1]==N[len-i])
			++k;
	cout << k << endl;
	return 0;
} 