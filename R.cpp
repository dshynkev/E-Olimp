#include <iostream>
#include <math.h>
using namespace std;
bool prime(long long n){ 
    for(long long i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
	long long num;
	scanf("%lld", &num);
	prime(num) ? printf("YES\n"):printf("NO\n");
	return 0;
}

