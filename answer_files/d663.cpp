#include <iostream>
using namespace std;
int s[1005][1005],S,T,ca,sdp[1005][1005];
void sdfs(int it,int st,int v){
	if(it>1000)return;
	if(sdp[st][it]<=v)return;
	sdp[st][it]=v;
	for(int i=s[it][0];i>=1;--i){
		sdfs(it+s[it][i],st,v+1);
	}
}
int main(){
	//cin.tie(0); ios::sync_with_stdio(false);
	for(int i=1;i<=1000;++i){
		int it=1;
		for(int j=2;j<=i/2;++j){
			if(i%j==0){
				int ac=1;
				for(int k=2;k<=j/2&&ac;++k){
					if(j%k==0)ac=0;
				}
				if(ac){
					s[i][it]=j;
					++it;
				}
			}
		}
		s[i][0]=it-1;
	}
	for(int i=1;i<=1000;++i){
		for(int j=1;j<=1000;++j){
			sdp[i][j]=1000;
		}
		sdfs(i,i,0);
	}
	while(cin >> S >> T){
		if(S+T==0)break;
		cout << "Case " << ++ca << ": ";
		if(sdp[S][T]==1000){
			cout << "-1\n";
		} 
		else{
			cout << sdp[S][T] << "\n";
		}
	}
} 
