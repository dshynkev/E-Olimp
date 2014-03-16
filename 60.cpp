#include <iostream>

using namespace std;
struct point
{
	short x, y;
};
int main()
{
	short N, i;
	cin >> N;
	point *arr=new point[N+1];
	for(i=1; i<N+1; ++i)
		cin >> arr[i].x >> arr[i].y;
	arr[0].x=arr[N].x;
	arr[0].y=arr[N].y;
	double S=0;
	for(i=0; i<N; ++i)
		S+=(arr[i].x+arr[i+1].x)*(arr[i].y-arr[i+1].y);
	S/=2;
	printf("%.3lf\n", S);
	return 0;
}

