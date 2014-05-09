#include <iostream>
#include <vector>
using namespace std;
struct triplet
{
	long x, y;
	char painted;
};
vector<triplet> queue;
int main()
{
	long n, i, j;
	short mode;
	triplet temp;
	scanf("%ld", &n);
	for(i=0; i<n; i++) {
		scanf("%hd", &mode);
		if(mode==1) {
			scanf("%ld %ld %c", &temp.x, &temp.y, &temp.painted);
			queue.push_back(temp);
		}
		else 
		{
			scanf("%ld %ld", &temp.x, &temp.y);
			temp.painted='N';
			for(j=queue.size()-1; j>-1; --j) {
				if(temp.x==queue[j].x&&temp.y==queue[j].y) {
					temp.painted=queue[j].painted;
					break;
				}
			}
			printf("%c\n", temp.painted);
		}
	}
	return 0;
}

