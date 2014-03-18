#include <iostream>

using namespace std;

int main()
{
	short mark;
	cin >> mark;
	switch(mark) {
	case 1:
	case 2:
	case 3:
		cout << "Initial\n";
		break;
	case 4:
	case 5:
	case 6:
		cout << "Average\n";
		break;
	case 7:
	case 8:
	case 9:
		cout << "Sufficient\n";
		break;
	case 10:
	case 11:
	case 12:
		cout << "High\n";
		break;
	}
	return 0;
}

