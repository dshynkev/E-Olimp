#include <iostream>
using namespace std;

int main()
{
	long long sum=0, mul=1;
	char c;
	while((c=getchar())!='\n') {
		sum+=(c-'0');
		mul*=(c-'0');
	}
	printf("%.3lf\n", double(mul)/sum);
	return 0;
} 