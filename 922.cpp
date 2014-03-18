#include <iostream>
using namespace std;

int main()
{
	short n, i;
	cin >> n;
	short *arr=new short[n];
	for(i=0; i<n; ++i)
		cin >> arr[i];
	cout << arr[i-1]<<" ";
	for(i=0; i<n-1; ++i)
		cout << arr[i] << " ";
	cout.seekp(-1, std::ios_base::cur);
	cout << endl;
	return 0;
} 