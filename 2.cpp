#include"stdio.h"
int main(){
 FILE *inf = fopen("input.txt", "r");
 FILE *outf = fopen("output.txt", "w");
     char c[10] = "";
     fscanf(inf, "%s", &c);
     short int i=0;
     while (c[i]!='\0') ++i;
     fprintf(outf, "%d\n", i);
 fclose(inf);
 fclose(outf);
return 0;
} 