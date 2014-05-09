#include <iostream>
using namespace std;

int main()
{
	long long N, M, aux, ops=0;
	cin >> N;
	while(N>0) {
		M=N;
		aux=0;
		while(M>0) {
			aux+=M%10;
			M/=10;
		}
		N-=aux;
		++ops;
	}
	cout << ops << endl;
	return 0;
} 