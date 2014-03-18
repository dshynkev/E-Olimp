#include <iostream>
using namespace std;

int main()
{
	short count, ans=0;
	int temp, sum=0;
	cin >> count;
	while(count--) {
		cin >> temp;
		if(!(temp%6)&&temp>0) {
			sum+=temp;
			++ans;
		}
	}
	cout <<ans << " " << sum << endl;
	return 0;
}

