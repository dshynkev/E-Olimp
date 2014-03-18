#include"stdio.h"
int main()
{
   FILE *in=fopen("input.txt", "r"), *out=fopen("output.txt", "w");
   char num[4];
   fscanf(in, "%s\n", &num);
   int rez=(num[0]-48)*(num[1]-48)*(num[2]-48);
   fprintf(out, "%d\n", rez);
   fclose(in);
   fclose(out);
   return 0;
} 