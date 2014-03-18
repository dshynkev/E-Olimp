#include <iostream>

using namespace std;

int main()
{
   short a;
   cin >> a;
   a<0 ? a=-a: a;
   a=a/10+a%10;
   cout << a << endl;
   return 0;
} 