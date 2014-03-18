#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	if(!x||!y) {
		cout << "0\n";
		return 0;
	}
	if(x>0)
		if(y>0)
			cout << "1\n";
		else
			cout << "4\n";
	else
		if(y>0)
			cout << "2\n";
		else
			cout << "3\n";
	return 0;
} 