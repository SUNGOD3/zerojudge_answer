#include <iostream>
#include <algorithm>
using namespace std;
struct pt{
	int x,y;
};
bool cmp(pt xx,pt yy){
	if(xx.x>yy.x||(xx.x==yy.x&&xx.y>yy.y))return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	while(cin >> n){
		if(n==0)break; 
		pt a[n];
		int xa=0,ya=0,s=1;
		for(int i=0;i<n;++i){
			cin >> a[i].x >> a[i].y;
			a[i].x*=2;
			a[i].y*=2;
			xa+=a[i].x;
			ya+=a[i].y; 
		}
		xa/=n;
		ya/=n;
		sort(a,a+n,cmp);
		for(int i=0;i<n&&s;++i){
			if(a[i].x-xa!=xa-a[n-i-1].x||a[i].y-ya!=ya-a[n-i-1].y){
				s=0;
			}
		}
		if(s){
			cout << "yes\n";
		}
		else{
			cout << "no\n";
		}
	}
} 
