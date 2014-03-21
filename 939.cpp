#include <iostream>
using namespace std;

int main()
{
	short num;
	cin >> num;
	cout << ((num/10)+(num%10))*((num/10)+(num%10)) << endl;
	return 0;
} 