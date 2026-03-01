#include <iostream>
#include <algorithm>
using namespace std;
struct p{
	int l,r;
};
bool cmp(p x,p y){
	if(x.l<y.l||(x.l==y.l&&x.r>y.r))return 1;
	return 0;
}
int t,m,ans[100005][2];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	for(int ca=0;ca<t;++ca){
		if(ca)cout << "\n";
		cin >> m;
		int it=0,x,y,ait=0,st=0,ma=0,mit=0,er=0;
		p a[100005];
		while(cin >> x >> y){
			if(x==0&&y==0)break;
			a[it].l=x;
			a[it].r=y;
			++it;
		}
		a[it].l=9999999;
		a[it].r=9999999;
		++it;
		sort(a,a+it,cmp);
		for(int i=0;i<it&&st<m&&er==0;++i){
			if(a[i].l>st){
				ans[ait][0]=mit;
				ans[ait][1]=ma;
				++ait;
				st=ma;
				if(st<a[i].l){
					er=1;
				}
				--i;
			}
			else{
				if(a[i].r>ma){
					ma=a[i].r;
					mit=a[i].l;
				}
			}
		}
		if(st<m){
			cout << "0\n";
		}
		else{
			cout << ait << "\n";
			for(int i=0;i<ait;++i){
				cout << ans[i][0] << " " << ans[i][1] << "\n";
			}
		} 
	}
} 
