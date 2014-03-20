#include <iostream>
using namespace std;

int main()
{
	short num;
	cin >> num;
	if(num/100==num%10) 
		cout << "=\n";
	else
		cout << (num/100 > num%10 ? num/100 : num%10) << endl;
	return 0;
}

