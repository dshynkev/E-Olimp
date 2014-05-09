#include <iostream>
using namespace std;

int main()
{
   __int64 a, b, c, s;
   cin >> a >> b >> c;
   cout <<  (s=a*b*c) << " ";
   cout << s*6-2*(a*b+b*c+a*c) << endl;
   return 0;
} 