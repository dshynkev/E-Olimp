#include <iostream>
using namespace std;

int main()
{
   char c;
   short quan=0;
   while((c=getchar())!='\n') {
       switch (c) {
       case 'A': case 'E': case 'I':case 'O': case 'U': case'Y':
           ++quan;
       }
   }
   cout << quan << endl;
   return 0;
} 