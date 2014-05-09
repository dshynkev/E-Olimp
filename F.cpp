#include <iostream>
#include <vector>
using namespace std;
 int main ()
{
     short N, i, j;
     vector<short> c;
    scanf ("%hd",&N);
   N++;
	c.resize(N);
    for(i = 0; i < N; ++i)
        c[i] = 0;
    c[0] = 1;
    for(j = 0; j < N; ++j)
       for(i = j; i > 0; --i)
          c[i] = c[i-1] + c[i];
    for(i = 0; i < N; ++i)
       printf ("%hd ", c[i]);
	printf("\n");
    return 0;
 }