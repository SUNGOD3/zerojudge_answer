#include <iostream>
#include <algorithm>
using namespace std;
long long fa[20005],n,m,w,t,ans;
struct edge{
	long long x,y,v;
};
edge p[50005];//v,x,y
long long f(long long x){
	if(fa[x]==x)return x;
	return f(fa[x]);
}
void merge(long long a,long long b){
	a=f(a);
	b=f(b);
	fa[b]=a;
}
bool cmp(edge a,edge b){
	if(a.v > b.v)return 1;
	return 0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n >> m >> w;
		ans=(n+m)*10000;
		for(int i=0;i<=n+m;++i){
			fa[i]=i;
		}
		for(int i=0;i<w;++i){
			cin >> p[i].x >> p[i].y >> p[i].v;
			p[i].y+=n;
		}
		sort(p,p+w,cmp);
		for(int i=0;i<w;++i){
			if(f(p[i].x)!=f(p[i].y)){
				merge(p[i].x,p[i].y);
				ans-=p[i].v;
			}
		}		
		cout << ans << "\n";
	}
} 
