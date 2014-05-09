#include <iostream>
#include <math.h>
using namespace std;

long long which(long long& num)
{
	
	short pw;
	while(num)
	{
		for(pw=1; pow(2, pw)<=num; ++pw) {}
		--pw;
		num-=pow(2, pw);
	}
	return pw+1;
}

int main()
{
	long long num;
	cin >> num;
	cout << which(num)<<endl;
	return 0;
} 