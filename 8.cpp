#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   long sq, matches, i, k, temp;
   cin >> sq;
   temp=(long)floor(sqrt(sq));
   k=temp*temp;
   matches= 4+6*(temp-1)+2*(temp-1)*(temp-1);
   if(k<sq) {
       for(i=0; i<temp; ++i) {
           matches+=(!i ? 3:2);
           ++k;
           if(k==sq)
               temp=-1;
       }
       for(i=0; i<temp+1; ++i) {
           matches+=(!i ? 3:2);
           ++k;
           if(k==sq)
               break;
       }
   }
   cout << matches<<endl;
   return 0;
} 