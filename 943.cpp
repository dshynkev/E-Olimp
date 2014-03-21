#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	cin >> num;
	if(num[2]!='0')	
		cout << num[2];
	if(num[1]!='0')
		cout << num[1];
	cout <<num[0] <<endl;
	return 0;
} 