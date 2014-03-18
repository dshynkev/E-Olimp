#include <iostream>
using namespace std;
int main()
{
	short n, cur, max=-101, min=101;
	cin >> n;
	while(n--) {
		cin >> cur;
		if(cur<min)
			min=cur;
		if(cur>max)
			max=cur;
	}
	cout << min+max<<endl;
	return 0;
} 