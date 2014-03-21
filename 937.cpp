#include <iostream>
#include <string>
using namespace std;

int main()
{
	short num;
	cin >> num;
	num=abs(num);
	cout << (num/100)*(num%10)*((num/10)%10) << endl;
	return 0;
} 