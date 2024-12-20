#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
struct mn{
	double x,y;
};
bool cmp(mn xx,mn yy){
	if(xx.x>yy.x||(xx.x==yy.x&&xx.y>xx.y))return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int c,n;
	cin >> c;
	while(c--){
		cin >> n;
		double h=0,ans=0;
		mn a[n];
		for(int i=0;i<n;++i)
			cin >> a[i].x >> a[i].y;
		sort(a,a+n,cmp);
		for(int i=1;i<n;++i)
			if(a[i].y>h){
				ans+=sqrt((a[i-1].x-a[i].x)*(a[i-1].x-a[i].x)+(a[i-1].y-a[i].y)*(a[i-1].y-a[i].y))*((a[i].y-h)/(a[i].y-a[i-1].y));
				h=a[i].y;
			}
		printf("%.2lf\n",ans);
	}
}
