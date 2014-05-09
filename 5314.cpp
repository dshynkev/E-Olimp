#include <iostream>

using namespace std;

int main()
{
   short k, n;
   cin >> k >> n;
   if(n==k)
       cout << (1<<(k+1)) << endl;
   else
       cout << (1<<k|1<<n) << endl;
   return 0;
} 