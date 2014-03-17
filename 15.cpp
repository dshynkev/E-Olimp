#include <iostream>
#include <string>
using namespace std;

int main()
{
	short N, M, j, i;
	string ans="";
	cin >> M >> N;
	int** arr=new int*[M+2];
	for(i=0; i<M+2; ++i)
		arr[i]=new int[N+2];
	for(i=0; i<N+2; ++i) {
		arr[M+1][i]=-1;
		arr[0][i]=-1;
	}
	for(i=0; i<M+2; ++i)  {
		arr[i][N+1]=-1;
		arr[i][0]=-1;
	}
	for(i=1; i<M+1; ++i)
		for(j=1; j<N+1; ++j)
			cin >> arr[i][j];
	for(i=M; i>0; --i) {
		for(j=1; j<N+1; ++j) {
			if(!((i>=M)&&(j<=1))) {
				if(arr[i][j-1]>arr[i+1][j])
					arr[i][j]+=arr[i][j-1];
				else
					arr[i][j]+=arr[i+1][j];
			}
		}
	}
	for(i=1, j=N; i!=M||j!=1;) {
		if(arr[i][j-1]>arr[i+1][j]) {
			ans="R"+ans;
			--j;
		}
		else
		{
			ans="F"+ans;
			++i;
		}
	}
	cout << ans << endl;
	return 0;
}

