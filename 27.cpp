#include<iostream>
#include<string>
using namespace std;

string to_bin(long long& num)
{
	string ans="";
	while(num) {
		ans=(num%2? "1"+ans:"0"+ans);
		num/=2;
	}
	return ans;
}
long long to_dec(string& str)
{
	long long r=1, rez=0;
	short i;
	for(i=str.length()-1; i>-1; --i) {
		if(str[i]=='1')
			rez+=r;
		r*=2;
	}
	return rez;
}
int main()
{
	string str;
	long long num, max=0, tmp;
	short i;
	cin >> num;
	str=to_bin(num);
	for(i=0; i<str.length(); ++i) {
		tmp=to_dec(str);
		if(tmp>max)
			max=tmp;
		str.append(str, 0, 1);
		str.erase(str.begin());
	}
	cout << max<<endl;
    return 0;
}
