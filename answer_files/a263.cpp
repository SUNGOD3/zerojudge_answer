#include <iostream>
#include <math.h>
using namespace std;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int e(int d,int g,int f){
	int c=d*365;
	for(int b=0;b!=d+1;b++)
		if(b%4==0&&b%100!=0||b%400==0)
		c++;
	c+=f;
	for(int b=0;b!=(g-1);b++)
		c=c+a[b];
	if((d%4==0&&d%100!=0||d%400==0)&&((g<2)||(g==2&&f<=29)))
	c--;
	return c;
}
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int b[2],c[2],d[2];
	while(cin>>b[0]>>c[0]>>d[0]>>b[1]>>c[1]>>d[1])
		cout<<abs(e(b[0],c[0],d[0])-e(b[1],c[1],d[1]))<<'\n';
}
