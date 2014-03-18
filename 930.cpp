#include <iostream>
using namespace std;
int main()
{
	bool nums[10]={0};
	char c;
	short quan=0;
	while((c=getchar())!='\n') {
		if(c>='0'&&c<='9')
			nums[c-'0']=1;
	}
	for(c=0; c<10; ++c)
		if(!nums[c])
			++quan;
	cout << quan<<endl;
		if(quan) {
		for(quan=0; quan<10; ++quan)
			if(!nums[quan])
				cout << quan <<" ";
		cout.seekp(-1, std::ios_base::cur);
		cout << endl;
	}
		system("PAUSE");
	return 0;
} 