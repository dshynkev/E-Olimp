#include <iostream>

using namespace std;

int main()
{
	char c;
	int count=0;
	c=getchar();
	while((c=getchar())!='\n')
	{
		switch(c) {
		case '+':
		case '*':
		case '-':
			++count;
			break;
		}
	}
	cout << count<<endl;
	return 0;
}

