#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if(a==INT_MIN&&b==-1) {
		cout << "2147483648\n";
		return 0;
	}
	if(!b||(a==INT_MIN&&b==-1)||a%b)
		cout << "ERROR\n";
	else
		cout << a/b <<endl;
	return 0;
}

