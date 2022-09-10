#include <iostream>
using namespace std;
int n,x,a[501][2];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> n >> x){
		if(n==0&&x==0)break;
		int ans=0;
		for(int i=2;i<=550;++i){
			for(int j=1;j<=n;++j){
				a[j][0]=j+1;
				a[j][1]=j-1;
			}
			a[n][0]=1;
			a[1][1]=n;
			int c=0,it=1,tmp=0;
			while(1&&c<n){
				while(tmp){
					tmp--;
					it=a[it][0];
				}
				if(it==x)break;
				a[a[it][1]][0]=a[it][0];
				a[a[it][0]][1]=a[it][1];
				it=a[it][0];
				++c;
				tmp=i-1;
			}
			if(c==n-1){
				ans=i;
				break;
			}
		}
		cout << ans << '\n';
	}
} 
