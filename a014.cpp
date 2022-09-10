#include <iostream>
#include <algorithm>
#define MAXN 200000
using namespace std;
int BIT[200005],n,m;
pair <int,int> a[30005];
int lb(int x){
	return x&(-x);
}
void edit(int x,int v){
	for(int i=x;i<=MAXN;i+=lb(i)){
		BIT[i]+=v;
	}
}
int sum(int x){
	int rt=0;
	for(int i=x;i>0;i-=lb(i)){
		rt+=BIT[i];
	}
	return rt;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> m){
		int ma=0,ans=0,la=-1,it=0,tmp;
		for(int i=0;i<=MAXN;++i){
			BIT[i]=0;
		}
		for(int i=0;i<n;++i){
			cin >> a[i].first >> a[i].second;
			edit(a[i].second,1);
		}
		sort(a,a+n);
		for(int i=1;i<=MAXN/2;++i){
			while(it<n&&i>a[it].first){
				edit(a[it].second,-1);
				++it;
			}
			tmp=sum(i+m);
			if(tmp==ma){
				++ans;
			}
			else if(tmp>ma){
				ans=1;
				ma=tmp;
			}
		}
		cout << ans << " " << ma << "\n";
	}
} 
