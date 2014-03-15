#include "stdio.h"
#include "math.h"

int main(){
 FILE *inf = fopen("input.txt", "r");
 FILE *outf = fopen("output.txt", "w");
 unsigned long long int N=0, M=0;
  int t, p;
  double x;
  fscanf(inf, "%llu", &N);
  x = pow(N, 1.0/3);
  t = int(x);
  int q = N-(t+1)*(t+1)*(t+1); if (q==0) ++t;
  M = 3*t*(t+1)*(t+1);
  N -= t*t*t;
  if (N!=0) {
  if (N >= t*t) {
      M += (3*t+1)*(t+1);
      N -= t*t;
      if (N!=0) {
          if (N >= t*(t+1)) {
              M += t*(t+2)+(t+1)*(t+1)+(t+1)*(t+2);
              N -= t*(t+1);
              if (N!=0) {
                  p = int(sqrt(N));
                  N -= p*p;
                  M += (3*p+1)*(p+1);
                  if (N>=p) {
                      N -= p;
                      M += 3*p+2;
                  };
                  if (N!=0) {M += 3*N+2;};
              };
          } else {
              p = int(sqrt(N));
              N -= p*p;
              M += (3*p+1)*(p+1);
              if (N>=p) {
                  N -= p;
                  M += 3*p+2;
              };
              if (N!=0) {M += 3*N+2;};
          };
      };
  } else {
      p = int(sqrt(N));
      N -= p*p;
      M += (3*p+1)*(p+1);
      if (N>=p) {
          N -= p;
          M += 3*p+2;
      };
      if (N!=0) {M += 3*N+2;};
  }
  }
 fprintf(outf, "%llu\n", M);
 fclose(inf);
 fclose(outf);
return 0;
} 