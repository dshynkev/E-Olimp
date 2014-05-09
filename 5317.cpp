#include <iostream>

using namespace std;

int main()
{
   long long A, k, tmp;
   cin >> A >> k;
   tmp=A;
   tmp|=(1<<k);
   A^=tmp;
   cout << (A? 0:1) << endl;
   return 0;
} 