#include <iostream>
using namespace std;
int h,k,dp[121],ansp[11],mc[11],ans;
void dfs(){
	for(int i=0;i<101;++i){
		dp[i]=0;
	}
	for(int i=0;i<101;++i){
		if(i==0||dp[i]){
			if(dp[i]<h){
				for(int j=0;j<k;++j){
					int nv=i+mc[j];
					if(dp[nv]==0){
						dp[nv]=dp[i]+1;
					}
					else{
						dp[nv]=min(dp[i]+1,dp[nv]);
					}
				}
			}
		}
		else if(dp[i]==0){
			if(i-1>ans){
				ans=i-1;
				for(int j=0;j<k;++j){
					ansp[j]=mc[j];
				}
			}
			break;
		}
	}
	return;
}

void fc(int c,int it){
	if(it==k){
		dfs();
		return;
	}
	for(int i=c+1;i<33;++i){
		mc[it]=i+1;
		fc(i,it+1);
	}
}

int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	while(cin >> h >> k){
		if(h==0&&k==0)break;
		ans=0;
		mc[0]=1;
		fc(0,1);
		for(int i=0;i<k;++i){
			cout << ansp[i] << " ";
		}
		cout << "-> " << ans << "\n";
	}
} 
