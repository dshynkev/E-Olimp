#include <iostream>
using namespace std;

short n;
short days[15], price[15];
int maximum;

void start_count(short a, short b)
{
   short i, q, temp=0;
   for(i=0; i<n; ++i) {
       if(days[i]>=a) {
           q=(days[i]-a+1)*price[i];
           temp=days[i];
           days[i]=0;
           start_count(a+1, b+q);
           days[i]=temp;
           temp=1;
       }
   }
   if(temp==0&&maximum<b)
       maximum=b;
}

int main()
{
   short i;
   cin >> n;
   //days=(short*)alloca(n*sizeof(short));
   //price=(short*)alloca(n*sizeof(short));
   for(i=0; i<n; ++i)
       cin >> days[i] >> price [i];
   start_count(1, 0);
   cout << maximum << endl;
   return 0;
} 