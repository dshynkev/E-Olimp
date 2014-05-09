#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double factlog(int n)
{
   double res=0;
   for(int i=1; i<=n; ++i) {res+=log(i);}
   return res;
}
int main()
{
   int n;
   cin >> n;
   double ans;
   ans=factlog(n-2)-2*factlog(n/2-1)+(n-2)*log(1.0/2);
   ans=exp(ans);
   printf("%.4lf\n", ans);
   return 0;
} 