#include <iostream>
using namespace std;

inline short mul(short& num)
{
	return (num/100)*(num%10)*(num/10%10);
}

inline short sum(short& num)
{
	return (num/100)+(num%10)+(num/10%10);
}

int main()
{
	short num;
	cin >> num;
	num=abs(num);
	cout << mul(num)-sum(num) <<endl;
	return 0;
} 