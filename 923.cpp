#include <iostream>
using namespace std;
const char* arr[]={"Winter", "Spring", "Summer", "Autumn", "Winter"};
int main()
{
	short month;
	cin >> month;
	cout << arr[month/3]<<endl;
	return 0;
} 