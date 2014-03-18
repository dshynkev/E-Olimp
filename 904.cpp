#include <iostream>
using namespace std;

int main()
{
	short size, tmp;
	cin >> size;
	while(size--) {
		cin >> tmp;
		cout << (tmp>-1 ?  tmp+2 : tmp) << (size ? " ": "");
	}
	cout << endl;
	return 0;
}

