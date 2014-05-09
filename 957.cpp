#include"math.h"
#include"stdio.h"
int main()
{
   FILE *f=fopen("input.txt", "r");
   FILE *f0=fopen("output.txt", "w");
   int i, init;
   double rez;
   for(i=0; i<3; i++) {fscanf(f, "%d", &init);}
   rez=init/100+(init/10)%10+init%10;
   rez=sqrt(rez);
   fprintf(f0, "%.3lf\n", rez);
   fclose(f);
   fclose(f0);
   return 0;
} 