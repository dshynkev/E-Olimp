#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, surn;
	char c;
	while((c=getchar())!=' ')
		name.push_back(c);
	cin >> surn;
	cout << surn << " " << name << endl;
	return 0;
}

