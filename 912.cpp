#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   char c, prev=' ';
   short sent=0;
   while((c=getchar())!='\n') {
	   if(c==' ') {
		   switch(prev) {
		   case '.':
		   case'!':
		   case'?':
			   ++sent;
		   }
	   }
	   prev=c;
   }
   ++sent;
   cout << sent<< endl;
   return 0;
} 