#include <iostream>
using namespace std;

inline int sqr(short num)
{
	return num*num;
}

int main()
{
	int num;
	cin >> num;
	cout << sqr(num/1000+num/100%10+num%100/10+num%10)<<endl;
	return 0;
} 