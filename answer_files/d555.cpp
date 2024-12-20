#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	int x;
	int y;
};
bool cmp(p a,p b){
	if(a.y>b.y)
		return 1;
	else if(a.y==b.y&&a.x>b.x)
		return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int n,ca=0;
	while(cin >> n){
		p a[n];
		int sx=-1,ans=0,sy=100001;
		for(int i=0;i<n;++i)
			cin >> a[i].x >> a[i].y;
		sort(a,a+n,cmp);
		for(int i=0;i<n;++i){
			if(a[i].y<sy&&a[i].x>sx){
				sx=a[i].x;
				sy=a[i].y;
				++ans;
			}
		}
		cout << "Case " << ++ca << ":\nDominate Point: " << ans << "\n";
		sx=-1;sy=100001;
		for(int i=0;i<n;++i){
			if(a[i].y<sy&&a[i].x>sx){
				sx=a[i].x;
				sy=a[i].y;
				cout << "(" << a[i].x << "," << a[i].y << ")\n";
			}
		}
	}
} 
