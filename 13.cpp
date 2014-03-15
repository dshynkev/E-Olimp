#include <iostream>
#include <math.h>
using namespace std;

double inline dist(short x1, short y1, short x2, short y2)
{
   return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
   short A, B, C, x1, y1, x2, y2, z2;
   cin >> A >> B >> C >> x1 >> y1 >> x2 >> y2 >> z2;
   double ans;
   if(z2==0)
       ans=dist(x1, y1, x2, y2);
   if(x2==0)
           ans=dist(x1, y1, -z2, y2);
   if(x2==A)
       ans=dist(x1, y1, A+z2, y2);
   if(x2==B)
       ans=dist(x1, y1, B+z2, y2);
   if(y2==0)
       ans=dist(x1, y1, x2, -z2);
   if(y2==A&&x2!=0)
       ans=dist(x1, y1, x2, A+z2);
   if(y2==B&&x2!=0)
       ans=dist(x1, y1, x2, B+z2);
   printf("%.2lf\n", ans);
   return 0;
} 