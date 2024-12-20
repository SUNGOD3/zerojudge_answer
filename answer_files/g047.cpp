#include <bits/stdc++.h>
using namespace std; 
struct Point{
	double x,y;
	Point(double xx,double yy){
		x=xx;
		y=yy;
	}
};
Point operator+(Point a,Point b){  //向量加 
	return Point(a.x+b.x,a.y+b.y);  
} 
Point operator-(Point a,Point b){ //向量減
	return Point(a.x-b.x,a.y-b.y);
} 
double sqr(double x){
	return x*x;
}
double dis(Point a,Point b){ //求ab的長度 
	return sqrt(sqr(a.x-b.x)+sqr(a.y-b.y));
}
Point Circum(Point a,Point b,Point c){ //三角形外心 
	double x1=a.x,y1=a.y;
	double x2=b.x,y2=b.y;
	double x3=c.x,y3=c.y;
	
	double a1=2*(x2-x1);
	double b1=2*(y2-y1);
	double c1=x2*x2+y2*y2-x1*x1-y1*y1;
	
	double a2=2*(x3-x2);
	double b2=2*(y3-y2);
	double c2=x3*x3+y3*y3-x2*x2-y2*y2;
	
	double x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
	double y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
	
	return Point(x,y);
} 
int xa,ya,xb,yb,xc,yc;
int main(){
	while(cin >> xa >> ya >> xb >> yb >> xc >> yc){
		Point P = Circum(Point(xa,ya),Point(xb,yb),Point(xc,yc));
		(isinf(P.x)||isinf(P.y)||isnan(P.x)||isnan(P.y))?cout << "No circumcenter.\n":cout << fixed  <<  setprecision(3) << P.x << " " << P.y << "\n";
	}
	return 0;
}
