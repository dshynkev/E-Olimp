#include "stdio.h"
int main()
{
  FILE *in=fopen("input.txt", "r");
  FILE *out=fopen("output.txt", "w");
  int a, b;
  while (!feof(in))
  {
      fscanf(in, "%d %d\n", &a, &b);
      b+=a;
      fprintf(out, "%d\n", b);
  }
  fclose(in);
  fclose(out);
  return 0;
} 