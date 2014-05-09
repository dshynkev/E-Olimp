#include <iostream>

using namespace std;

int main()
{
   long long A, k;
   cin >> A >> k;
   A|=1<<k;
   cout << A << endl;
   return 0;
} 