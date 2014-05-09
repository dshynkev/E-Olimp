#include <iostream>
#include <vector>
using namespace std;

short count(vector<short>& num)
{
   short i, carry=0;
   for(i=num.size()-1; i>0; --i) {
       num[i-1]+=num[i];
       if(num[i-1]/10)
           num[i-1]=num[i-1]%10+1;
       num.pop_back();
   }
   return num[0];
}

int main()
{
   vector<short> num;
   char n;
   while((n=getchar())!='\n')
       num.push_back(n-'0');
   cout << count(num)<<endl;
   return 0;
} 