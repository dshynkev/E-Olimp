#include <iostream>
using namespace std;

int main()
{
	short size, i;
	cin >> size;
	double cur, arf=0;
	i=size;
	while(size--) {
		cin >> cur;
		if(cur>0)
			arf+=cur;
		else
			--i;
	}
	arf/=i;
	if(!i)
		cout << "Not Found\n";
	else
		printf("%.2lf\n", arf);
	return 0;
}

