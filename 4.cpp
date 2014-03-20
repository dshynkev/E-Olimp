#include "stdio.h"
#include "math.h"
inline void _swap(double& r1, double& r2)
{
   double temp;
   temp =r1;
   r1=r2;
   r2=temp;
}
int main ()
{
   double x1, y1, r1, x2, y2, r2, dist;
   short rez;
   scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
   if(r2>r1)
   {
       _swap(r1, r2);
   }
   if(x1==x2&&y1==y2) {
       if(r1==r2)
           rez=-1;
       else
           rez=0;
   }else{
       dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
       if(dist<r1) {
           if(dist+r2<r1)
               rez=0;
           else {
               if(fabs(dist+r2-r1)==0)
                   rez=1;
               else
                   rez=2;
           }
           printf("%hd\n", rez);
           return 0;
       }
       if (r1+r2>dist)
           rez=2;
       if(fabs(r1+r2-dist)==0)
           rez=1;
       if(r1+r2<dist)
           rez=0;
   }
   printf("%hd\n", rez);
   return 0;
} 