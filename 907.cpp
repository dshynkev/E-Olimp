#include <iostream>
using namespace std;

int main()
{
	short count, i;
	double tmp;
	bool done=false;
	cin >> count;
	for(i=0; i<count; ++i) {
		cin >> tmp;
		if(!done&&tmp<=2.5) {
			printf("%hd %.2lf\n", i+1, tmp);
			done=true;
		}
	}
	if(!done)
		cout << "Not Found\n";
	return 0;
}

