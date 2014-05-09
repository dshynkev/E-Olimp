#include <iostream>

using namespace std;
inline bool check_triangle(int &a, int &b, int &c)
{
	return ((a<b+c)&&(b<a+c)&&(c<b+a));
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	check_triangle(a, b, c) ? printf("YES\n") : printf("NO\n");
	return 0;
}

