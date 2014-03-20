#include "stdio.h"

int main ()
{
   short prec, n, i;
   int m, rez;
   FILE  *in=fopen("input.txt", "rb"),*out=fopen("output.txt", "wb");
   fscanf(in, "%d %hd %hd\n", &m, &n, &prec);
   rez=m/n;
   m%=n;
   m*=10;
   fprintf(out, "%d.", rez);
   for(i=0; i<prec; i++) {
       fprintf(out, "%hd", short(m/n));
       m%=n;
       m*=10;
   }
fprintf(out, "\n");
   fclose(in);
   fclose(out);
   return 0;
} 