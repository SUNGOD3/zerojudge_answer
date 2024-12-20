#include <bits/stdc++.h>
using namespace std;
int t,n,fa[50],p[50],dp[55][55],ma;
string s[50];
int ff(int x){
	if(fa[x]==x)return x;
	return fa[x]=ff(fa[x]);
}
void mg(int x,int y){
	x=ff(x);
	y=ff(y);
	if(x==y)return;
	if(p[x]<p[y])swap(x,y);
	fa[y]=x;
	p[x]+=p[y];
	ma=max(ma,p[x]);
	p[y]=0;
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
		cin >> n;
		ma=1;
		for(int i=0;i<n;++i){
			fa[i]=i;
			p[i]=1;
			cin >> s[i];
		}
		for(int i=0;i<n;++i){
			for(int j=i+1;j<n;++j){
				if(ff(i)==ff(j))continue;
				memset(dp,0,sizeof(dp));
				int m1=s[i].size(),m2=s[j].size();
				for(int ii=0;ii<m1;++ii){
					for(int jj=0;jj<m2;++jj){
						if(s[i][ii]==s[j][jj]){
							dp[ii+1][jj+1]=dp[ii][jj]+1;
						}
						else{
							dp[ii+1][jj+1]=max(dp[ii][jj+1],dp[ii+1][jj]);
						}
					}
				}
				if(dp[m1][m2]*2>=min(m1,m2)){
					mg(i,j);
				}
			}
		}
		cout << ma << "\n";
	}
} 
