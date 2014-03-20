// C++ stdio
#include"stdio.h"

int main(){
  FILE *inf = fopen("input.txt", "r");
  FILE *outf = fopen("output.txt", "w");
      int a = 0;
      fscanf(inf, "%d", &a);
      fprintf(outf, "%d %d\n", a/10, a%10);
  fclose(inf);
  fclose(outf);
 return 0;

} // main 