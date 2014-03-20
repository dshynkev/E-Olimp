#include <iostream>
using namespace std;

int main()
{
	short a, b, c;
	cin >> a >> b >> c;
	cout << (a==b&&b==c ? 1 : (a==b||b==c||a==c ?  2: 3))<<endl;
	return 0;
}

