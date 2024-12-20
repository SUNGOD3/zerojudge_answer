#include <iostream>
using namespace std;
int n,k,a[101][2];
int main(){
	while(cin >> n >> k){
		if(n==0&&k==0)break;
		int ac=1;
		for(int ans=0;ans<n&&ac;++ans){
			int s=ans,t=n,d,b=1;
			for(int i=0;i<n;++i){
				a[i][0]=i-1;
				a[i][1]=i+1;
			}
			a[0][0]=n-1;
			a[n-1][1]=0;
			while(t-->1&&b){
				int tt=k;
				if(t==n-1)--tt;
				while(tt){
					tt--;
					s=a[s][1];
				}
				if(s==0)b=0;
				d=s;
				tt=k;
				while(tt){
					tt--;
					d=a[d][1];
					if(d==s){
						d=a[d][1];
					}
				}
				a[a[d][0]][1]=a[d][1];
				a[a[d][1]][0]=a[d][0];
				a[d][0]=a[s][0];
				a[d][1]=a[s][1];
				a[a[s][0]][1]=d;
				a[a[s][1]][0]=d;
			}
			if(b){
				cout << ans+1 << "\n";
				break;
			}
		}
	}
}
