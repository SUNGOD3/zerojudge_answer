#include <iostream>
using namespace std;
int c[101][101],n,ans[31],s,t;
int f( int a, int b ){
    if( b==0 )
        return a;
    return f( b, a%b );
}
inline void dfs(int it,int d){
	if(it==t&&d==0){
		for(int i=0;i<it;++i){
			cout << ans[i] ;
			if(i<it-1)cout << ' ';
			else cout << "\n";
		}
		return;
	}
	else if(it==t||d<ans[it-1])return;
	int sn=d/(t-it);
	for(int i=ans[it-1];i<=sn;++i){
		int ch=1;
		for(int j=0;j<it&&ch;++j)
			if(c[ans[j]][i]!=1)ch=0;
		if(ch){
			ans[it]=i;
			dfs(it+1,d-i);
		}
	}
}
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=101;++i)
		for(int j=i;j<101;++j)
			c[i][j]=f(i,j);
	while(cin >> n){
		for(int ca=1;ca<=n;++ca){
			cin >> s >> t;
			int sn=s/t;
			cout << "Case " << ca << ":\n";
			for(int i=1;i<=sn;++i){
				ans[0]=i;
				dfs(1,s-i);
			}
		}
	}
} 
