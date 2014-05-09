#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
struct point
{
	double x, y;
};
inline double sqr(double num)
{
	return num*num;
}
inline double dist(double&xa, double& ya, double&xb, double& yb)
{
	return sqrt(sqr(xa-xb)+sqr(ya-yb));
}
inline double dist(point& a, point& b)
{
	return sqrt(sqr(a.x-b.x)+sqr(a.y-b.y));
}
//++++++++++++++++++++++++ FUNCTIONS +++++++++++++++++++++++++++

bool itsc(point& a, point& b, point& c, point& d)		//Does the tile intersect the painting? 
{
	bool ans=false;
	if(max(a.x, b.x)>=min(c.x, d.x)&&
		max(c.x, d.x)>=min(a.x, b.x)&&
		max(a.y, b.y)>=min(c.y, d.y)&&
		max(c.y, d.y)>=min(a.y, b.y)
		)
	{
		if((c.x-a.x)*(b.y-a.y)-(b.x-a.x)*(c.y-a.y)*(d.x-c.x)*(d.y-c.y)-(b.x-a.x)*(d.y-a.y)<=0)
			if((a.x-c.x)*(d.y-c.y)-(d.x-c.x)*(a.y-c.y)*(b.x-c.x)*(d.y-c.y)-(d.x-c.x)*(b.y-c.y)<=0)
				ans=true;
	}
	return ans;
}
void point_itsc(point& a, point& b, point& c, point& d, double& x, double& y, int& k)			//Find the point of intersection (Kramer method)
{
	double a1, b1, c1, a2, b2, c2, D, Dx, Dy;
	k=1;
	a1=b.y-a.y;
	b1=a.x-b.x;
	c1=a.x*b.y-a.y*b.x;
	a2=d.y-c.y;
	b2=c.x-d.x;
	c2=c.x*d.y-d.y*c.x;
	D=a1*b2-a2*b1;
	Dx=c1*b2-c2*b1;
	Dy=a1*c2-a2*c1;
	x=Dx/D;
	y=Dy/D;
}
int which_case(point& a, point& b, point& c, point& d)				//I HATE THIS @!#$% FUNCTION!
{
	if ((a.x>=b.x) && (a.y>=b.y) && (b.x>=c.x) && (b.y>=c.y) && (c.x>=d.x) && (c.y>=d.y) ||
		(a.x>=b.x) && (a.y<=b.y) && (b.x>=c.x) && (b.y<=c.y) && (c.x>=d.x) && (c.y<=d.y)) return 1;
    if ((a.x<=b.x) && (a.y<=b.y) && (b.x<=d.x) && (b.y<=d.y) && (d.x<=c.x) && (d.y<=c.y) ||
       (a.x>=b.x) && (a.y<=b.y) && (b.x>=d.x) && (b.y<=d.y) && (d.x>=c.x) && (d.y<=c.y) ||
       (a.x>=b.x) && (a.y>=b.y) && (b.x>=d.x) && (b.y>=d.y) && (d.x>=c.x) && (d.y>=c.y) ||
	   (a.x>=b.x) && (a.y<=b.y) && (b.x>=d.x) && (b.y<=d.y) && (d.x>=c.x) && (d.y<=c.y))   return 2;
    if ((b.x<=a.x) && (b.y<=a.y) && (a.x<=c.x) && (a.y<=c.y) && (c.x<=d.x) && (c.y<=d.y) ||
       (b.x>=a.x) && (b.y<=a.y) && (a.x>=c.x) && (a.y<=c.y) && (c.x>=d.x) && (c.y<=d.y) ||
       (b.x>=a.x) && (b.y>=a.y) && (a.x>=c.x) && (a.y>=c.y) && (c.x>=d.x) && (c.y>=d.y) ||
       (b.x>=a.x) && (b.y<=a.y) && (a.x>=c.x) && (a.y<=c.y) && (c.x>=d.x) && (c.y<=d.y))   return 3;
    if ((b.x<=a.x) && (b.y<=a.y) && (a.x<=d.x) && (a.y<=d.y) && (d.x<=c.x) && (d.y<=c.y) ||
       (b.x>=a.x) && (b.y<=a.y) && (a.x>=d.x) && (a.y<=d.y) && (d.x>=c.x) && (d.y<=c.y) ||
       (b.x>=a.x) && (b.y>=a.y) && (a.x>=d.x) && (a.y>=d.y) && (d.x>=c.x) && (d.y>=c.y) ||
       (b.x>=a.x) && (b.y<=a.y) && (a.x>=d.x) && (a.y<=d.y) && (d.x>=c.x) && (d.y<=c.y))   return 4;
    if ((a.x<=d.x) && (a.y<=d.y) && (d.x<=b.x) && (d.y<=b.y) && (b.x<=c.x) && (b.y<=c.y) ||
       (a.x>=d.x) && (a.y<=d.y) && (d.x>=b.x) && (d.y<=b.y) && (b.x>=c.x) && (b.y<=c.y) ||
       (a.x>=d.x) && (a.y>=d.y) && (d.x>=b.x) && (d.y>=b.y) && (b.x>=c.x) && (b.y>=c.y) ||
       (a.x>=d.x) && (a.y<=d.y) && (d.x>=b.x) && (d.y<=b.y) && (b.x>=c.x) && (b.y<=c.y))   return 5;
    if ((a.x<=d.x) && (a.y<=d.y) && (d.x<=c.x) && (d.y<=c.y) && (c.x<=b.x) && (c.y<=b.y) ||
       (a.x>=d.x) && (a.y<=d.y) && (d.x>=c.x) && (d.y<=c.y) && (c.x>=b.x) && (c.y<=b.y) ||
       (a.x>=d.x) && (a.y>=d.y) && (d.x>=c.x) && (d.y>=c.y) && (c.x>=b.x) && (c.y>=b.y) ||
       (a.x>=d.x) && (a.y<=d.y) && (d.x>=c.x) && (d.y<=c.y) && (c.x>=b.x) && (c.y<=b.y))   return 6;
    if ((a.x<=c.x) && (a.y<=c.y) && (c.x<=b.x) && (c.y<=b.y) && (b.x<=d.x) && (b.y<=d.y) ||
       (a.x>=c.x) && (a.y<=c.y) && (c.x>=b.x) && (c.y<=b.y) && (b.x>=d.x) && (b.y<=d.y) ||
       (a.x>=c.x) && (a.y>=c.y) && (c.x>=b.x) && (c.y>=b.y) && (b.x>=d.x) && (b.y>=d.y) ||
       (a.x>=c.x) && (a.y<=c.y) && (c.x>=b.x) && (c.y<=b.y) && (b.x>=d.x) && (b.y<=d.y))   return 7;
    if ((a.x<=c.x) && (a.y<=c.y) && (c.x<=d.x) && (c.y<=d.y) && (d.x<=b.x) && (d.y<=b.y) ||
       (a.x>=c.x) && (a.y<=c.y) && (c.x>=d.x) && (c.y<=d.y) && (d.x>=b.x) && (d.y<=b.y) ||
       (a.x>=c.x) && (a.y>=c.y) && (c.x>=d.x) && (c.y>=d.y) && (d.x>=b.x) && (d.y>=b.y) ||
       (a.x>=c.x) && (a.y<=c.y) && (c.x>=d.x) && (c.y<=d.y) && (d.x>=b.x) && (d.y<=b.y))   return 8;
    if ((b.x<=c.x) && (b.y<=c.y) && (c.x<=a.x) && (c.y<=a.y) && (a.x<=d.x) && (a.y<=d.y) ||
       (b.x>=c.x) && (b.y<=c.y) && (c.x>=a.x) && (c.y<=a.y) && (a.x>=d.x) && (a.y<=d.y) ||
       (b.x>=c.x) && (b.y>=c.y) && (c.x>=a.x) && (c.y>=a.y) && (a.x>=d.x) && (a.y>=d.y) ||
       (b.x>=c.x) && (b.y<=c.y) && (c.x>=a.x) && (c.y<=a.y) && (a.x>=d.x) && (a.y<=d.y))   return 9;
    if ((b.x<=d.x) && (b.y<=d.y) && (d.x<=a.x) && (d.y<=a.y) && (a.x<=c.x) && (a.y<=c.y) ||
       (b.x>=d.x) && (b.y<=d.y) && (d.x>=a.x) && (d.y<=a.y) && (a.x>=c.x) && (a.y<=c.y) ||
       (b.x>=d.x) && (b.y>=d.y) && (d.x>=a.x) && (d.y>=a.y) && (a.x>=c.x) && (a.y>=c.y) ||
       (b.x>=d.x) && (b.y<=d.y) && (d.x>=a.x) && (d.y<=a.y) && (a.x>=c.x) && (a.y<=c.y))   return 10;
    if ((c.x<=a.x) && (c.y<=a.y) && (a.x<=b.x) && (a.y<=b.y) && (b.x<=d.x) && (b.y<=d.y) ||
       (c.x>=a.x) && (c.y<=a.y) && (a.x>=b.x) && (a.y<=b.y) && (b.x>=d.x) && (b.y<=d.y) ||
       (c.x>=a.x) && (c.y>=a.y) && (a.x>=b.x) && (a.y>=b.y) && (b.x>=d.x) && (b.y>=d.y) ||
       (c.x>=a.x) && (c.y<=a.y) && (a.x>=b.x) && (a.y<=b.y) && (b.x>=d.x) && (b.y<=d.y))   return 11;
    if ((c.x<=b.x) && (c.y<=b.y) && (b.x<=a.x) && (b.y<=a.y) && (a.x<=d.x) && (a.y<=d.y) ||
       (c.x>=b.x) && (c.y<=b.y) && (b.x>=a.x) && (b.y<=a.y) && (a.x>=d.x) && (a.y<=d.y) ||
       (c.x>=b.x) && (c.y>=b.y) && (b.x>=a.x) && (b.y>=a.y) && (a.x>=d.x) && (a.y>=d.y) ||
       (c.x>=b.x) && (c.y<=b.y) && (b.x>=a.x) && (b.y<=a.y) && (a.x>=d.x) && (a.y<=d.y))   return 12;
}
double line(point& a, point& b, point& c, point& d, double& H)
{
	double a1, a2, a3, b2, b3, c3;
	int tmp;
	a1=dist(a, b);
	a2=dist(a, c);
	a3=dist(a, d);
	b2=dist(b, c);
	b3=dist(b, d);
	c3=dist(c, d);
	tmp=which_case(a, b, c, d);
	if(tmp==5) {
		if(sqrt(sqr(a1)-sqr(a3))<=H)
			return a1*atan(sqrt(sqr(a1)-sqr(a3))/a3);
		else
			return a1*atan(H/sqrt(sqr(a1)-sqr(H)));
	}
	if(tmp==6) {
		if(sqrt(sqr(a1)-sqr(a3))<=H)
			return a1*(atan(sqrt(sqr(a1)-sqr(a3))/a3)-atan(sqrt(sqr(a1)-sqr(a2))/a2));
		else
			if(sqrt(sqr(a1)-sqr(a2))<H&&a2!=0)
				return a1*(atan(H/sqrt(sqr(a1)-sqr(H)))-atan(sqrt(sqr(a1)-sqr(a2))/a2));
	}
	if(tmp==7) {
		if(sqrt(sqr(a1)-sqr(a2))<=H)
			return a1*atan(sqrt(sqr(a1)-sqr(a2))/a2);
		else
			return a1*atan(H/sqrt(sqr(a1)-sqr(H)));
	}
	if(tmp==8) {
		if(sqrt(sqr(a1)-sqr(a2))<=H)
			return a1*(atan(sqrt(sqr(a1)-sqr(a2))/a2)-atan(sqrt(sqr(a1)-sqr(a3))/a3));
		else
			if(sqrt(sqr(a1)-sqr(a2))<H&&a3!=0)
				return a1*(atan(H/sqrt(sqr(a1)-sqr(H)))-atan(sqrt(sqr(a1)-sqr(a3))/a3));
	}
	if(tmp==9) {
		if(a1<=H)
			return a1*(M_PI/2-atan(sqrt(sqr(a1)-sqr(a2))/a2));
		else
			if(sqrt(sqr(a1)-sqr(a2))<H)
				return a1*(atan(H/sqrt(sqr(a1)-sqr(H)))-atan(sqrt(sqr(a1)-sqr(a2))/a2));
	}
	if(tmp==10) {
		if(a1<=H)
			return a1*(M_PI/2-atan(sqrt(sqr(a1)-sqr(a3))/a3));
		else
			if(sqrt(sqr(a1)-sqr(a3))<H)
				return a1*(atan(H/sqrt(sqr(a1)-sqr(H)))-atan(sqrt(sqr(a1)-sqr(a3))/a3));
	}
	if(tmp==11||tmp==12) {
		if(a1<=H)
			return a1*M_PI/2;
		else
			return a1*atan(H/sqrt(sqr(a1)-sqr(H)));
	}
	return 0;
}
//++++++++++++++++++++++++ MAIN ++++++++++++++++++++++++++++++++
int main()
{
	point  A, B, C, D;
	double H, res;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> D.x >> D.y;
	cin >> H;
	double a, b, c, x, y, s, s1;
	int k;
	a=B.y-A.y;
	b=A.x-B.x;
	c=A.x*B.y-A.y*B.x;
	if((a*C.x+b*C.y==c)&&(a*D.x+b*D.y==c))
		res=line(A, B, C, D, H);
	else
	{
		if(itsc(A, B, C, D)) {
			point_itsc(A, B, C, D, x, y, k);
			if(k>0) {
				s=dist(A.x, A.y, x, y);
				s1=dist(A.x, A.y, B.x, B.y);
				if(s1>s)
					res=sqrt(sqr(s1)-sqr(s));
				if(res>H)
					res=H;
				if((x==C.x&&y==C.y||(x==D.x&&y==D.y)))
					res=0;
				if(!s)
					res=0;
			}
			else
				res=0;
		}
		printf("%.3lf", res);
	}
	return 0;
}

