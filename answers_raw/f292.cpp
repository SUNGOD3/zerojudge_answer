#include <iostream>
#include <map>
using namespace std;
map <long long,long long> pm;
long long fa[300005],sz[300005],rk[300005];
long long n,m,is,x,y,no;
long long ff(long long x){
	if(fa[x]==x)return x;
	return ff(fa[x]);
}
void un(long long x,long long y){
	x=ff(x);
	y=ff(y);
	if(x==y)return;
	if(sz[x]>sz[y]){
		sz[x]+=sz[y];
		rk[x]+=rk[y];
		fa[y]=fa[x];
	}
	else{
		sz[y]+=sz[x];
		rk[y]+=rk[x];
		fa[x]=fa[y];
	}
}
int main(){
	cin.tie(0); cout.tie(0);ios::sync_with_stdio(false);
	while(cin >> n >> m){
		pm.clear();
		no=n+10;
		for(int i=0;i<=n+m+5;++i){
			if(i>n){
				fa[i]=rk[i]=sz[i]=0;
			}
			else{
				pm[i]=fa[i]=rk[i]=i;
				sz[i]=1;
			}
		}
		for(int i=0;i<m;++i){
			cin >> is;
			if(is==1){
				cin >> x >> y; 
				x=pm[x];
				y=pm[y];
				un(x,y);
			}
			else if(is==2){
				cin >> x >> y;
				long long tx=pm[x];
				long long ty=pm[y];
				if(tx==ty)continue;
				sz[ff(tx)]--;
				rk[ff(tx)]-=x;
				pm[x]=no++;
				tx=pm[x];
				sz[tx]=1;
				rk[tx]=x;
				fa[tx]=tx;
				un(tx,pm[y]);
			}
			else{
				cin >> x;
				x=pm[x];
				cout << sz[ff(x)] << " " << rk[ff(x)] << "\n";
			}
		}
		
	}
}
