#include<iostream>
#include<math.h>
using namespace std;

bool prime(long long n){
   if(n==1)
       return false;
   if(n==2)
       return true;
   for(long long i=2;i<=sqrt(n);i++)
       if(!(n%i))
           return false;
   return true;
}

int re(int a) {
   int r=0;
   while (a) {
       r=r*10+a%10;
       a/=10;
   }
   return r;
}

int main(){
   int a,b, ans=0;
   cin >> a >> b;
   if (a>b) {
       a^=b; b^=a; a^=b;
   }
   if (a==1) a++;
   for (int i=a;i<=b;++i) { if (prime(i) && prime(re(i))) ++ans;}
   cout << ans << endl;
   return 0;
} 