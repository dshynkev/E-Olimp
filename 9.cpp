#include <iostream>
#include <string>
using namespace std;
long quan=0, minim=0;
void recurs_find(short n, long cand, long mul, long sum)
{
   short j;
   if(n<0)
       return;
   if(n==0&&mul==sum) {
       ++quan;
       if(!minim)
           minim=cand;
   }
   else
   {
       if(mul<100) {
           for(j=1; j<10; ++j)
               recurs_find(n-1, cand*10+j, mul*j, sum+j);
       }
   }
}

string num(short N)
{
   string num="";
   short i;
   for(i=0; i<N-2; i++)
       num+="1";
   num+="2";
   num+=char(N+'0');
   return num;
}

int main()
{
   short N;
   cin >> N;
   /*switch(N) {
   case 1:
       cout << "10 0\n";
       break;
   case 2:
       cout << "1 22\n";;
       break;
   default:
       cout << N*(N-1) << " " << num(N)<<endl;
   }*/
   if(N==1)
       cout << "10 0\n";
   else{
   for(int i=1; i<10; ++i)
       recurs_find(N-1, i,i,i);
       cout << quan << " "<<minim<<endl;
   }
   return 0;
} 