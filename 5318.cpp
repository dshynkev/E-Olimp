#include <iostream>

using namespace std;

int main()
{
   long long A, k, tmp;
   cin >> A >> k;
   tmp=1<<k;
   tmp--;
   A&=tmp;
   cout << A << endl;
   return 0;
} 