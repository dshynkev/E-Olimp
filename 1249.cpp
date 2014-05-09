#include <iostream>
#include <math.h>

#define EPS 1E-7

using namespace std;
typedef __int64 i64;
int main()
{
   i64 n;
   while(cin >> n) {
       double ans=floor(n*log10(n))+1;
       ans=(n*log10(n)+1)-ans;
       ans=pow(10, ans);
       cout << int(ans+EPS) << endl;
   }
   return 0;
} 