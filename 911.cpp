#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a, b, c, x1, x2;
   cin >> a >> b>> c;
   int D=(b*b-4*a*c);
   if(D<0) 
		cout << "No roots\n";
   else
	   if(!D)
		   cout << "One root: "<<-b/(2*a) << endl;
	   else {
		   x1=(-b-sqrt(D))/(2*a);
		   x2=(-b+sqrt(D))/(2*a);
		   cout << "Two roots: ";
		   (x1>x2 ? cout <<  x2 << " " << x1: cout << x1 << " " << x2) << endl;
	   }
   return 0;
} 