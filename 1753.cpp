#include <iostream>

using namespace std;

int main()
{
   long long A;
   short i=0;
   while(cin >>A&&A) {
   while(!(A&((1<<i)-1))) {
   ++i;
   }
   cout << (1<<(i-1)) << endl;
   i=1;
   }
   return 0;
} 