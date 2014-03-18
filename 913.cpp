#include <iostream>
#include <utility>
using namespace std;
typedef pair<double, double> dpair;

inline void SumDob(dpair& cur)
{
   printf("%.4lf %.4lf\n", cur.first+cur.second, cur.first*cur.second);
}

int main()
{
   short N;
   cin >> N;
   dpair cur;
   while(N--) {
       cin >> cur.first >> cur.second;
       SumDob(cur);
   }
   return 0;
} 