#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int quan, L, W, H;
   int cur;
   cin >> quan;
   while(quan--) {
           cin >> L >> W >> H;
           cur=2*W*H + 2*L*H;
           cout << ceil(double(cur)/16) << endl;
   }
   return 0;
} 