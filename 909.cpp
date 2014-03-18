#include <iostream>
using namespace std;

int main()
{
	bool prev=true, cur;
	char c;
	int words=0;
	while((c=getchar())!='\n') {
		cur=(c==' ');
		if(cur!=prev)
			++words;
		prev=cur;
	}
	cout << words/2+1<<endl;
	return 0;
}

