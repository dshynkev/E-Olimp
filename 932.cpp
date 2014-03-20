#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	short S, a, sp=0;
	cin >> S >> a;
	S*=2;
	printf("%.2lf\n", (-a+sqrt(a*a+4*S))/2);
	return 0;
} 