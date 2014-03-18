#include <iostream>
using namespace std;

int main()
{
	short num;
	cin >> num;
	num=abs(num);
	cout << num/100<<endl <<(num/10)%10 << endl <<num%10 << endl;
	return 0;
} 