#include <iostream>

using namespace std;

int main()
{
   long N, k=0;
   cin >> N;
   double s=0;
   while(s<=0.5)
       s+=1.0/(N-k++);
   cout << N-k+1<<endl;
   return 0;
} 