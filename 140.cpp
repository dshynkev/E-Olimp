#include <iostream>
using namespace std;
typedef __int64 i;

int main()
{
   short n;
   cin >> n;
   i b=2, k=2;
   short c;
   if(n==1) {
       cout << "2 2\n";
       return 0;
   }
   for(c=2; c<=n; ++c) {
       b+=(1<<c);
       b-=b/2;
       k=(1<<c)-b;
   }
   cout << k+n%2 << " " << b << endl;
   return 0;
} 