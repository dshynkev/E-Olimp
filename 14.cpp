#include <iostream>
#include <string>
#include <math.h>
using namespace std;

namespace std
{
   inline string to_str(int _Val)
   {
       char _Buf[2 * _MAX_INT_DIG];
       sprintf(_Buf, "%ld", _Val);
       return (string(_Buf));
   }
}

int main()
{
   int N, ans=-1;
   bool fail=false;
   long tick;
   short len;
   string ticket;
   cin >> N >> ticket;
   tick=atoi(ticket.data());   //e-olimp dislikes stoi()...
   len=(short)ticket.length();
   for(long i=tick+1; i<tick+N; ++i, fail=false) {
       ticket =to_str((int)i);     //Tried std::to_string(), ostringstream->str() ect.
       if(len<(short)ticket.length()){
           fail=true;
           break;
       }
       ++ans;
       for(int j=2; j<sqrt(i); ++j) {
           if(!(i%j)) {
               fail=true;
           }
       }
       if(!fail)
           break;
   }
   cout << (fail ? -1: 1)<<endl;
   return 0;
} 